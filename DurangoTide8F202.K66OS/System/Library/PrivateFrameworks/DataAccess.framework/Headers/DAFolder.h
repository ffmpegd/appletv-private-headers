/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DAFolder : NSObject {
	NSString *_folderName;	// 4 = 0x4
	NSString *_folderID;	// 8 = 0x8
	NSString *_parentFolderID;	// 12 = 0xc
	int _dataclass;	// 16 = 0x10
	BOOL _isDefault;	// 20 = 0x14
	BOOL _hasRemoteChanges;	// 21 = 0x15
}
@property(assign) int dataclass;	// G=0x31eb67f1; S=0x31eb6801; @synthesize=_dataclass
@property(copy) NSString *folderID;	// G=0x31eb6a45; S=0x31eb6a9d; @synthesize=_folderID
@property(copy) NSString *folderName;	// G=0x31eb6a2d; S=0x31eb6a75; @synthesize=_folderName
@property(assign) BOOL hasRemoteChanges;	// G=0x31eb67b1; S=0x31eb67c1; @synthesize=_hasRemoteChanges
@property(assign) BOOL isDefault;	// G=0x31eb67d1; S=0x31eb67e1; @synthesize=_isDefault
@property(copy) NSString *parentFolderID;	// G=0x31eb6a5d; S=0x31eb6ac5; @synthesize=_parentFolderID
// declared property getter: - (int)dataclass;	// 0x31eb67f1
- (void)dealloc;	// 0x31eb69c1
- (id)description;	// 0x31eb6911
// declared property getter: - (id)folderID;	// 0x31eb6a45
// declared property getter: - (id)folderName;	// 0x31eb6a2d
// declared property getter: - (BOOL)hasRemoteChanges;	// 0x31eb67b1
- (unsigned)hash;	// 0x31eb68f1
// declared property getter: - (BOOL)isDefault;	// 0x31eb67d1
- (BOOL)isEqual:(id)equal;	// 0x31eb6811
- (id)mailboxID;	// 0x31eb3005
// declared property getter: - (id)parentFolderID;	// 0x31eb6a5d
- (id)parentMailboxID;	// 0x31eb3015
// declared property setter: - (void)setDataclass:(int)dataclass;	// 0x31eb6801
// declared property setter: - (void)setFolderID:(id)anId;	// 0x31eb6a9d
// declared property setter: - (void)setFolderName:(id)name;	// 0x31eb6a75
// declared property setter: - (void)setHasRemoteChanges:(BOOL)changes;	// 0x31eb67c1
// declared property setter: - (void)setIsDefault:(BOOL)aDefault;	// 0x31eb67e1
// declared property setter: - (void)setParentFolderID:(id)anId;	// 0x31eb6ac5
@end

