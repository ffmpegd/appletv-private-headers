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
@property(retain, nonatomic) NSString *accountPrsId;	// G=0x30fc7e61; S=0x30fc7e89; 
@property(retain, nonatomic) NSString *bookmarksBarId;	// G=0x30fc7a95; S=0x30fc7abd; 
@property(assign, nonatomic) unsigned bookmarksBarOrder;	// G=0x30fc7bcd; S=0x30fc7c2d; 
@property(retain, nonatomic) NSString *bookmarksMenuId;	// G=0x30fc7b31; S=0x30fc7b59; 
@property(assign, nonatomic) unsigned bookmarksMenuOrder;	// G=0x30fc7ca9; S=0x30fc7d09; 
@property(retain, nonatomic) NSDictionary *bulkRequests;	// G=0x30fc79cd; S=0x30fc79f5; 
@property(assign, nonatomic) unsigned clientVersion;	// G=0x30fc7d85; S=0x30fc7de5; 
@property(retain, nonatomic) NSString *ctag;	// G=0x30fc75e5; S=0x30fc760d; 
@property(retain, nonatomic) NSString *etag;	// G=0x30fc7775; S=0x30fc779d; 
@property(readonly, assign) BOOL hasChanges;	// G=0x30fc8265; @synthesize=_hasChanges
@property(assign, nonatomic) BOOL hasHitQuotaLimit;	// G=0x30fc80c5; S=0x30fc8105; 
@property(retain, nonatomic) NSDictionary *heldAsideOrderings;	// G=0x30fc803d; S=0x30fc8065; 
@property(retain, nonatomic) NSURL *homeURL;	// G=0x30fc7259; S=0x30fc72ad; 
@property(assign, nonatomic) BOOL initialSyncDone;	// G=0x30fc736d; S=0x30fc73ad; 
@property(retain, nonatomic) NSNumber *knownQuotaRemaining;	// G=0x30fc819d; S=0x30fc81c5; 
@property(retain, nonatomic) NSURL *principalURL;	// G=0x30fc7f29; S=0x30fc7f7d; 
@property(retain, nonatomic) NSString *ptag;	// G=0x30fc76ad; S=0x30fc76d5; 
@property(retain, nonatomic) NSString *pushKey;	// G=0x30fc751d; S=0x30fc7545; 
@property(retain, nonatomic) NSDictionary *pushTransports;	// G=0x30fc7905; S=0x30fc792d; 
@property(assign, nonatomic) BOOL supportsSyncCollection;	// G=0x30fc7445; S=0x30fc7485; 
@property(retain, nonatomic) NSString *syncToken;	// G=0x30fc783d; S=0x30fc7865; 
- (id)initWithBookmarkDatabase:(void *)bookmarkDatabase;	// 0x30fc7099
// declared property getter: - (id)accountPrsId;	// 0x30fc7e61
// declared property getter: - (id)bookmarksBarId;	// 0x30fc7a95
// declared property getter: - (unsigned)bookmarksBarOrder;	// 0x30fc7bcd
// declared property getter: - (id)bookmarksMenuId;	// 0x30fc7b31
// declared property getter: - (unsigned)bookmarksMenuOrder;	// 0x30fc7ca9
// declared property getter: - (id)bulkRequests;	// 0x30fc79cd
// declared property getter: - (unsigned)clientVersion;	// 0x30fc7d85
// declared property getter: - (id)ctag;	// 0x30fc75e5
- (void)dealloc;	// 0x30fc7191
// declared property getter: - (id)etag;	// 0x30fc7775
// declared property getter: - (BOOL)hasChanges;	// 0x30fc8265
// declared property getter: - (BOOL)hasHitQuotaLimit;	// 0x30fc80c5
// declared property getter: - (id)heldAsideOrderings;	// 0x30fc803d
// declared property getter: - (id)homeURL;	// 0x30fc7259
// declared property getter: - (BOOL)initialSyncDone;	// 0x30fc736d
// declared property getter: - (id)knownQuotaRemaining;	// 0x30fc819d
// declared property getter: - (id)principalURL;	// 0x30fc7f29
// declared property getter: - (id)ptag;	// 0x30fc76ad
// declared property getter: - (id)pushKey;	// 0x30fc751d
// declared property getter: - (id)pushTransports;	// 0x30fc7905
// declared property setter: - (void)setAccountPrsId:(id)anId;	// 0x30fc7e89
// declared property setter: - (void)setBookmarksBarId:(id)anId;	// 0x30fc7abd
// declared property setter: - (void)setBookmarksBarOrder:(unsigned)order;	// 0x30fc7c2d
// declared property setter: - (void)setBookmarksMenuId:(id)anId;	// 0x30fc7b59
// declared property setter: - (void)setBookmarksMenuOrder:(unsigned)order;	// 0x30fc7d09
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x30fc79f5
// declared property setter: - (void)setClientVersion:(unsigned)version;	// 0x30fc7de5
// declared property setter: - (void)setCtag:(id)ctag;	// 0x30fc760d
// declared property setter: - (void)setEtag:(id)etag;	// 0x30fc779d
// declared property setter: - (void)setHasHitQuotaLimit:(BOOL)limit;	// 0x30fc8105
// declared property setter: - (void)setHeldAsideOrderings:(id)orderings;	// 0x30fc8065
// declared property setter: - (void)setHomeURL:(id)url;	// 0x30fc72ad
// declared property setter: - (void)setInitialSyncDone:(BOOL)done;	// 0x30fc73ad
// declared property setter: - (void)setKnownQuotaRemaining:(id)remaining;	// 0x30fc81c5
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x30fc7f7d
// declared property setter: - (void)setPtag:(id)ptag;	// 0x30fc76d5
// declared property setter: - (void)setPushKey:(id)key;	// 0x30fc7545
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x30fc792d
// declared property setter: - (void)setSupportsSyncCollection:(BOOL)collection;	// 0x30fc7485
// declared property setter: - (void)setSyncToken:(id)token;	// 0x30fc7865
// declared property getter: - (BOOL)supportsSyncCollection;	// 0x30fc7445
// declared property getter: - (id)syncToken;	// 0x30fc783d
- (void)writeToBookmarkDB;	// 0x30fc71f9
@end
