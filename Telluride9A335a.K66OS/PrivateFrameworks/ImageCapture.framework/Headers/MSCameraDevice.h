/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraDevice.h"


@interface MSCameraDevice : ICCameraDevice {
@private
	void *_msCameraProperties;	// 12 = 0xc
}
- (id)initWithVolumePath:(id)volumePath mediaPaths:(id)paths;	// 0x36dd0d9d
- (void)dealloc;	// 0x36dd06c1
- (BOOL)eject;	// 0x36dd071d
- (void)enumerateContent;	// 0x36dd0815
- (void)finalize;	// 0x36dd0d41
- (unsigned)itemsInFolder:(char *)folder;	// 0x36dd0c35
@end

