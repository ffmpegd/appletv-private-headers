/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class ASAccount, NSMutableDictionary;

@interface ASFolderHierarchy : NSObject {
	ASAccount *_account;	// 4 = 0x4
	NSMutableDictionary *_folderCache;	// 8 = 0x8
	NSMutableDictionary *_folderByIdCache;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
@property(retain) NSMutableDictionary *folderCache;	// G=0x34378d6d; S=0x34377b25; converted property
@property(retain) id folderIdsThatExternalClientsCareAbout;	// G=0x34377af9; S=0x34379131; converted property
+ (id)_folderCacheFilenameWithId:(id)anId;	// 0x34377d31
+ (void)cleanUpFilesForAccountWithId:(id)anId;	// 0x34378825
- (id)initWithAccount:(id)account;	// 0x34377df5
- (void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;	// 0x34377b85
- (id)_folderCacheFilename;	// 0x34377cf1
- (void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)about;	// 0x343788ed
- (id)_pathForFolder:(id)folder usingCache:(id)cache foldersById:(id)anId;	// 0x34378175
- (void)_pruneBadFolderIdsThatExternalClientsCareAbout;	// 0x34378051
- (void)_restoreFromSavedFoldersThatExternalClientsCareAbout;	// 0x34377aad
- (id)_savedFolderPathsThatExternalClientsCareAbout;	// 0x34377bf5
- (void)_setFolderByIdCacheFromCurrentCache;	// 0x343786d9
- (void)_setFolderCache:(id)cache;	// 0x34378b89
- (void)_setFolderPathsFromCurrentCache;	// 0x34378511
- (void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)about;	// 0x34377bd5
- (void)blowAwayFolderCache;	// 0x34377b5d
- (void)clearLocalCache;	// 0x34377c15
- (void)dealloc;	// 0x34377d99
- (id)description;	// 0x34377ec1
// converted property getter: - (id)folderCache;	// 0x34378d6d
- (id)folderForID:(id)anId;	// 0x34377cbd
// converted property getter: - (id)folderIdsThatExternalClientsCareAbout;	// 0x34377af9
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)dataclasses;	// 0x34377f25
- (id)folders;	// 0x34377c91
- (id)foldersTag;	// 0x34377c65
- (id)foldersUnderFolderWithID:(id)anId;	// 0x343783d1
- (void)setDelegate:(id)delegate;	// 0x34377a9d
// converted property setter: - (void)setFolderCache:(id)cache;	// 0x34377b25
// converted property setter: - (void)setFolderIdsThatExternalClientsCareAbout:(id)about;	// 0x34379131
@end

