/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSDictionary, NSNumber, NSURL;

@interface BookmarkDAVSyncData : NSObject {
@private
	void *_db;	// 4 = 0x4
	NSMutableDictionary *_backingDict;	// 8 = 0x8
	BOOL _hasChanges;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *accountPrsId;	// G=0x337dee61; S=0x337dee89; 
@property(retain, nonatomic) NSString *bookmarksBarId;	// G=0x337dea95; S=0x337deabd; 
@property(assign, nonatomic) unsigned bookmarksBarOrder;	// G=0x337debcd; S=0x337dec2d; 
@property(retain, nonatomic) NSString *bookmarksMenuId;	// G=0x337deb31; S=0x337deb59; 
@property(assign, nonatomic) unsigned bookmarksMenuOrder;	// G=0x337deca9; S=0x337ded09; 
@property(retain, nonatomic) NSDictionary *bulkRequests;	// G=0x337de9cd; S=0x337de9f5; 
@property(assign, nonatomic) unsigned clientVersion;	// G=0x337ded85; S=0x337dede5; 
@property(retain, nonatomic) NSString *ctag;	// G=0x337de5e5; S=0x337de60d; 
@property(retain, nonatomic) NSString *etag;	// G=0x337de775; S=0x337de79d; 
@property(readonly, assign) BOOL hasChanges;	// G=0x337df265; @synthesize=_hasChanges
@property(assign, nonatomic) BOOL hasHitQuotaLimit;	// G=0x337df0c5; S=0x337df105; 
@property(retain, nonatomic) NSDictionary *heldAsideOrderings;	// G=0x337df03d; S=0x337df065; 
@property(retain, nonatomic) NSURL *homeURL;	// G=0x337de259; S=0x337de2ad; 
@property(assign, nonatomic) BOOL initialSyncDone;	// G=0x337de36d; S=0x337de3ad; 
@property(retain, nonatomic) NSNumber *knownQuotaRemaining;	// G=0x337df19d; S=0x337df1c5; 
@property(retain, nonatomic) NSURL *principalURL;	// G=0x337def29; S=0x337def7d; 
@property(retain, nonatomic) NSString *ptag;	// G=0x337de6ad; S=0x337de6d5; 
@property(retain, nonatomic) NSString *pushKey;	// G=0x337de51d; S=0x337de545; 
@property(retain, nonatomic) NSDictionary *pushTransports;	// G=0x337de905; S=0x337de92d; 
@property(assign, nonatomic) BOOL supportsSyncCollection;	// G=0x337de445; S=0x337de485; 
@property(retain, nonatomic) NSString *syncToken;	// G=0x337de83d; S=0x337de865; 
- (id)initWithBookmarkDatabase:(void *)bookmarkDatabase;	// 0x337de099
// declared property getter: - (id)accountPrsId;	// 0x337dee61
// declared property getter: - (id)bookmarksBarId;	// 0x337dea95
// declared property getter: - (unsigned)bookmarksBarOrder;	// 0x337debcd
// declared property getter: - (id)bookmarksMenuId;	// 0x337deb31
// declared property getter: - (unsigned)bookmarksMenuOrder;	// 0x337deca9
// declared property getter: - (id)bulkRequests;	// 0x337de9cd
// declared property getter: - (unsigned)clientVersion;	// 0x337ded85
// declared property getter: - (id)ctag;	// 0x337de5e5
- (void)dealloc;	// 0x337de191
// declared property getter: - (id)etag;	// 0x337de775
// declared property getter: - (BOOL)hasChanges;	// 0x337df265
// declared property getter: - (BOOL)hasHitQuotaLimit;	// 0x337df0c5
// declared property getter: - (id)heldAsideOrderings;	// 0x337df03d
// declared property getter: - (id)homeURL;	// 0x337de259
// declared property getter: - (BOOL)initialSyncDone;	// 0x337de36d
// declared property getter: - (id)knownQuotaRemaining;	// 0x337df19d
// declared property getter: - (id)principalURL;	// 0x337def29
// declared property getter: - (id)ptag;	// 0x337de6ad
// declared property getter: - (id)pushKey;	// 0x337de51d
// declared property getter: - (id)pushTransports;	// 0x337de905
// declared property setter: - (void)setAccountPrsId:(id)anId;	// 0x337dee89
// declared property setter: - (void)setBookmarksBarId:(id)anId;	// 0x337deabd
// declared property setter: - (void)setBookmarksBarOrder:(unsigned)order;	// 0x337dec2d
// declared property setter: - (void)setBookmarksMenuId:(id)anId;	// 0x337deb59
// declared property setter: - (void)setBookmarksMenuOrder:(unsigned)order;	// 0x337ded09
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x337de9f5
// declared property setter: - (void)setClientVersion:(unsigned)version;	// 0x337dede5
// declared property setter: - (void)setCtag:(id)ctag;	// 0x337de60d
// declared property setter: - (void)setEtag:(id)etag;	// 0x337de79d
// declared property setter: - (void)setHasHitQuotaLimit:(BOOL)limit;	// 0x337df105
// declared property setter: - (void)setHeldAsideOrderings:(id)orderings;	// 0x337df065
// declared property setter: - (void)setHomeURL:(id)url;	// 0x337de2ad
// declared property setter: - (void)setInitialSyncDone:(BOOL)done;	// 0x337de3ad
// declared property setter: - (void)setKnownQuotaRemaining:(id)remaining;	// 0x337df1c5
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x337def7d
// declared property setter: - (void)setPtag:(id)ptag;	// 0x337de6d5
// declared property setter: - (void)setPushKey:(id)key;	// 0x337de545
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x337de92d
// declared property setter: - (void)setSupportsSyncCollection:(BOOL)collection;	// 0x337de485
// declared property setter: - (void)setSyncToken:(id)token;	// 0x337de865
// declared property getter: - (BOOL)supportsSyncCollection;	// 0x337de445
// declared property getter: - (id)syncToken;	// 0x337de83d
- (void)writeToBookmarkDB;	// 0x337de1f9
@end

