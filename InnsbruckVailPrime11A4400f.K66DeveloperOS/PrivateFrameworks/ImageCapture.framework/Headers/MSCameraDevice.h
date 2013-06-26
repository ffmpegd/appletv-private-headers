/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraDevice.h"


@interface MSCameraDevice : ICCameraDevice {
	void *_msCameraProperties;	// 12 = 0xc
}
- (id)initWithVolumePath:(id)volumePath mediaPaths:(id)paths;	// 0x3127fda1
- (void)dealloc;	// 0x3127fff5
- (BOOL)eject;	// 0x3128060d
- (void)enumerateContent;	// 0x312801e1
- (void)finalize;	// 0x31280051
- (unsigned)itemsInFolder:(char *)folder;	// 0x312800ad
@end
