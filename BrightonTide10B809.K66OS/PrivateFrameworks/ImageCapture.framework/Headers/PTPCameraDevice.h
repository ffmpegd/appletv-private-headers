/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraDevice.h"

@class PTPInitiator;

@interface PTPCameraDevice : ICCameraDevice {
	void *_ptpCameraProperties;	// 12 = 0xc
}
@property(readonly, assign) PTPInitiator *initiator;	// G=0x342033dd; 
- (id)initWithTCPIPInfo:(id)tcpipinfo;	// 0x34202e65
- (id)initWithUSBLocationID:(unsigned)usblocationID;	// 0x342029e5
- (void)addToEventHandlerQ:(id)eventHandlerQ;	// 0x34203581
- (void)dealloc;	// 0x34203325
- (BOOL)eject;	// 0x34203495
- (void)enumerateContent;	// 0x342033f1
- (void)finalize;	// 0x34203381
// declared property getter: - (id)initiator;	// 0x342033dd
@end

