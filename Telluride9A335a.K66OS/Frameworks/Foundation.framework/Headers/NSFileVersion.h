/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSString, NSDate;
@protocol NSCoding;

@interface NSFileVersion : NSObject {
@private
	NSURL *_fileURL;	// 4 = 0x4
	id _library;	// 8 = 0x8
	NSString *_clientID;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	NSURL *_contentsURL;	// 20 = 0x14
	BOOL _isBackup;	// 24 = 0x18
	NSString *_localizedName;	// 28 = 0x1c
	NSString *_localizedComputerName;	// 32 = 0x20
	NSDate *_modificationDate;	// 36 = 0x24
	BOOL _isResolved;	// 40 = 0x28
	id _reserved1;	// 44 = 0x2c
	id _reserved2;	// 48 = 0x30
}
@property(readonly, assign) NSURL *URL;	// G=0x3212ffd5; 
@property(readonly, assign, getter=_isBackup) BOOL _isBackup;	// G=0x32131c51; 
@property(readonly, assign, getter=isConflict) BOOL conflict;	// G=0x32130295; 
@property(assign, getter=isDiscardable) BOOL discardable;
@property(readonly, assign) NSString *localizedName;	// G=0x32130035; 
@property(readonly, assign) NSString *localizedNameOfSavingComputer;	// G=0x321300a9; 
@property(readonly, assign) NSDate *modificationDate;	// G=0x32130141; 
@property(readonly, assign) id<NSCoding> persistentIdentifier;	// G=0x321301b5; 
@property(assign, getter=isResolved) BOOL resolved;	// G=0x32130469; S=0x32130325; 
+ (void *)_addConflictObserverForItemAtURL:(id)url statusChangedHandler:(id)handler;	// 0x32131f95
+ (id)_addVersionOfItemAtURL:(id)url withContentsOfURL:(id)url2 options:(unsigned)options temporaryStorageIdentifier:(id *)identifier error:(id *)error;	// 0x32131399
+ (id)_autosaveDirectoryURLCreateIfNecessary:(BOOL)necessary;	// 0x32130ebd
+ (BOOL)_conflictsExistForItemAtURL:(id)url;	// 0x32131de1
+ (id)_libraryForURL:(id)url clientID:(id)anId temporaryStorageIdentifier:(id *)identifier;	// 0x32130fc1
+ (void)_markConflicts:(id)conflicts asHandledForItemAtURL:(id)url;	// 0x32131df9
+ (id)_otherVersionsOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier;	// 0x321310cd
+ (void)_removeConflictObserver:(void *)observer;	// 0x32131f99
+ (BOOL)_removeOtherVersionsOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier error:(id *)error;	// 0x32131659
+ (void)_removeTemporaryDirectoryAtURL:(id)url;	// 0x32131a3d
+ (id)_supportedGenerationalStorageClientIDs;	// 0x32130f81
+ (id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier;	// 0x321315e5
+ (id)_temporaryStorageLocationForIdentifier:(id)identifier;	// 0x32130f21
+ (id)_versionOfItemAtURL:(id)url forClientID:(id)clientID name:(id)name temporaryStorageIdentifier:(id)identifier evenIfDeleted:(BOOL)deleted;	// 0x32131829
+ (id)_versionOfItemAtURL:(id)url forPersistentIdentifier:(id)persistentIdentifier temporaryStorageIdentifier:(id)identifier;	// 0x3213120d
+ (id)currentVersionOfItemAtURL:(id)url;	// 0x3212fc79
+ (id)otherVersionsOfItemAtURL:(id)url;	// 0x3212fce9
+ (BOOL)removeOtherVersionsOfItemAtURL:(id)url error:(id *)error;	// 0x32130a19
+ (id)unresolvedConflictVersionsOfItemAtURL:(id)url;	// 0x3212fe55
+ (BOOL)unresolvedConflictsExistForItemAtURL:(id)url;	// 0x32131da9
+ (id)versionOfItemAtURL:(id)url forPersistentIdentifier:(id)persistentIdentifier;	// 0x3212fe31
+ (id)versionsOfItemAtURL:(id)url;	// 0x32131c61
- (id)init;	// 0x3212faad
// declared property getter: - (id)URL;	// 0x3212ffd5
- (id)_documentInfo;	// 0x32131abd
- (id)_initWithFileURL:(id)fileURL library:(id)library clientID:(id)anId name:(id)name contentsURL:(id)url isBackup:(BOOL)backup revision:(id)revision;	// 0x32130b0d
// declared property getter: - (BOOL)_isBackup;	// 0x32131c51
- (void)_overrideModificationDateWithDate:(id)date;	// 0x32131b79
- (BOOL)_setDocumentInfo:(id)info;	// 0x32131b35
- (void)dealloc;	// 0x3212fafd
- (unsigned)hash;	// 0x3212fc51
// declared property getter: - (BOOL)isConflict;	// 0x32130295
- (BOOL)isEqual:(id)equal;	// 0x3212fbd5
// declared property getter: - (BOOL)isResolved;	// 0x32130469
// declared property getter: - (id)localizedName;	// 0x32130035
// declared property getter: - (id)localizedNameOfSavingComputer;	// 0x321300a9
// declared property getter: - (id)modificationDate;	// 0x32130141
// declared property getter: - (id)persistentIdentifier;	// 0x321301b5
- (BOOL)removeAndReturnError:(id *)error;	// 0x3213089d
- (id)replaceItemAtURL:(id)url options:(unsigned)options error:(id *)error;	// 0x32130479
- (id)restoreOverItemAtURL:(id)url error:(id *)error;	// 0x32131d89
// declared property setter: - (void)setResolved:(BOOL)resolved;	// 0x32130325
@end

