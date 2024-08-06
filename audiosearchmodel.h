#ifndef AUDIOSEARCHMODEL_H
#define AUDIOSEARCHMODEL_H

#include "audioinfo.h"
#include "qqmlintegration.h"
#include <QAbstractListModel>
#include <QNetworkReply>
#include <QObject>
#include <QUrl>
#include <qnetworkaccessmanager.h>

class AudioInfo;

class AudioSearchModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(bool isSearching READ isSearching WRITE setIsSearching NOTIFY isSearchingChanged FINAL)

public:
    enum Role{
        AudioNameRole = Qt::UserRole +1,
        AudioAuthorRole ,
        AudioImageSourceRole,
        AudioSourceRole
    };


    explicit AudioSearchModel(QObject *parent = nullptr);

    virtual int rowCount(const QModelIndex &parent) const override;
    virtual QVariant data(const QModelIndex &index, int role) const override;
    virtual QHash<int, QByteArray> roleNames() const override;

    bool isSearching() const;
    void setIsSearching(bool newIsSearching);

public slots:
    void searchSong(const QString &name);
    void parseData();


signals:


    void isSearchingChanged();

private:
    QList<AudioInfo*> m_audioList;
    QNetworkAccessManager m_networkManager;
    QNetworkReply *m_reply = nullptr;
    bool m_isSearching =false;
};

#endif // AUDIOSEARCHMODEL_H
