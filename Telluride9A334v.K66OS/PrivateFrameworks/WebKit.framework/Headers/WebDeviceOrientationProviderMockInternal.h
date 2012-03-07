/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDeviceOrientationProviderMockInternal : NSObject {
@private
	OwnPtr<WebCore::DeviceOrientationClientMock> m_core;	// 4 = 0x4
}
- (id)init;	// 0x33a17b6d
- (id).cxx_construct;	// 0x33a17b39
- (void).cxx_destruct;	// 0x33a17b4d
- (id)lastOrientation;	// 0x33a17ca1
- (void)setController:(DeviceOrientationController *)controller;	// 0x33a17af9
- (void)setOrientation:(id)orientation;	// 0x33a17dc9
- (void)startUpdating;	// 0x33a17b11
- (void)stopUpdating;	// 0x33a17b25
@end

