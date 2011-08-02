/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraFolder.h"

@class NSString;

@interface PTPCameraFolder : ICCameraFolder {
@private
	void *_ptpCameraFolderProperties;	// 12 = 0xc
	NSString *_path;	// 16 = 0x10
}
@property(copy) id info;	// G=0x332c04c5; S=0x332c2cd5; 
@property(readonly, assign) unsigned objHandle;	// G=0x332c04b5; 
@property(retain) NSString *path;	// G=0x332c5b09; S=0x332c5b4d; @synthesize=_path
@property(readonly, assign) unsigned storageID;	// G=0x332c04a5; 
@property(readonly, assign) unsigned type;	// G=0x332c0495; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device type:(unsigned)type storageID:(unsigned long)anId objectHandle:(unsigned long)handle;	// 0x332c0695
- (void)dealloc;	// 0x332c2e19
- (BOOL)deleteItemFromCamera:(id)camera;	// 0x332c492d
- (id)description;	// 0x332c2aed
- (void)enumerateContent;	// 0x332c7979
- (void)finalize;	// 0x332c2dc1
- (id)folderForObjectHandle:(unsigned long)objectHandle;	// 0x332c5215
- (id)folderForObjectHandleCreatingIfNeeded:(unsigned long)objectHandleCreatingIfNeeded addUsedObjectIDs:(id)ids numFoldersCreated:(int *)created;	// 0x332c7775
- (BOOL)hasDCIMParent;	// 0x332c2bb5
// declared property getter: - (id)info;	// 0x332c04c5
- (id)itemForObjectHandle:(unsigned long)objectHandle;	// 0x332c52e9
// declared property getter: - (unsigned long)objHandle;	// 0x332c04b5
// declared property getter: - (id)path;	// 0x332c5b09
- (void)refreshInfo;	// 0x332c2c79
// declared property setter: - (void)setInfo:(id)info;	// 0x332c2cd5
// declared property setter: - (void)setPath:(id)path;	// 0x332c5b4d
// declared property getter: - (unsigned long)storageID;	// 0x332c04a5
// declared property getter: - (unsigned)type;	// 0x332c0495
@end
