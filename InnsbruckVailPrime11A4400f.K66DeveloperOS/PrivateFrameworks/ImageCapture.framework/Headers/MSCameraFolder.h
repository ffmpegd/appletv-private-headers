/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICCameraFolder.h"


@interface MSCameraFolder : ICCameraFolder {
	void *_msCameraFolderProperties;	// 20 = 0x14
}
@property(readonly, assign) timespec fsCreationTime;	// G=0x3127cf0d; 
@property(readonly, assign) timespec fsModificationTime;	// G=0x3127cf25; 
@property(readonly, assign) unsigned long long fsSN;	// G=0x3127cef9; 
@property(readonly, assign) long long fsSize;	// G=0x3127cf3d; 
- (id)initWithName:(id)name parentFolder:(id)folder device:(id)device fsSN:(unsigned long long)sn fsCreationTime:(timespec)time fsModificationTime:(timespec)time6 fsSize:(long long)size fsFlags:(unsigned)flags;	// 0x3127cde9
- (void)dealloc;	// 0x3127ce69
- (BOOL)deleteItemFromCamera:(id)camera;	// 0x3127d7d1
- (void)enumerateContent;	// 0x3127cf51
- (void)finalize;	// 0x3127ceb1
- (id)folderMatchingPath:(id)path;	// 0x3127dbbd
// declared property getter: - (timespec)fsCreationTime;	// 0x3127cf0d
// declared property getter: - (timespec)fsModificationTime;	// 0x3127cf25
// declared property getter: - (unsigned long long)fsSN;	// 0x3127cef9
// declared property getter: - (long long)fsSize;	// 0x3127cf3d
- (id)itemMatchingName:(id)name fsSN:(unsigned long long)sn fsCreationTime:(timespec *)time fsSize:(long long)size;	// 0x3127d919
@end
