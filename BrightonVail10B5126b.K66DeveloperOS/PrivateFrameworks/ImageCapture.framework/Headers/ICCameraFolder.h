/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraItem.h"
#import "ImageCapture-Structs.h"

@class NSArray;

@interface ICCameraFolder : ICCameraItem {
	void *_folderProperties;	// 8 = 0x8
	int _filesLock;	// 12 = 0xc
	int _foldersLock;	// 16 = 0x10
}
@property(readonly, assign) NSArray *contents;	// G=0x341f66b9; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device;	// 0x341f619d
- (void)addFile:(id)file;	// 0x341f6455
- (void)addFolder:(id)folder;	// 0x341f64b5
// declared property getter: - (id)contents;	// 0x341f66b9
- (void)dealloc;	// 0x341f62b1
- (void)deleteFile:(id)file;	// 0x341f65f9
- (void)deleteFolder:(id)folder;	// 0x341f6659
- (void)deleteItem:(id)item;	// 0x341f6515
- (id)description;	// 0x341f63a1
- (id)files;	// 0x341f6791
- (void)finalize;	// 0x341f6301
- (id)folders;	// 0x341f67b1
- (BOOL)hasThumbnail;	// 0x341f67d1
- (void)lockFiles;	// 0x341f6351
- (void)lockFolders;	// 0x341f6379
- (id)metadata;	// 0x341f67d9
- (void)requestMetadata;	// 0x341f6889
- (void)requestThumbnail;	// 0x341f67e9
- (CGImageRef)thumbnail;	// 0x341f67d5
- (void)unlockFiles;	// 0x341f6365
- (void)unlockFolders;	// 0x341f638d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x341f6729
@end

