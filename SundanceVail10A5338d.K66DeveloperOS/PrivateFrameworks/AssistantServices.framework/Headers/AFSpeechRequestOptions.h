/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AFSpeechRequestOptions : NSObject {
	int _event;	// 4 = 0x4
	NSString *_btDeviceAddress;	// 8 = 0x8
	BOOL _isEyesFree;	// 12 = 0xc
}
@property(assign, nonatomic) int activationEvent;	// G=0x33f80515; S=0x33f80525; @synthesize=_event
@property(copy, nonatomic) NSString *btDeviceAddress;	// G=0x33f80535; S=0x33f80549; @synthesize=_btDeviceAddress
@property(assign, nonatomic) BOOL isEyesFree;	// G=0x33f80559; S=0x33f80569; @synthesize=_isEyesFree
- (id)initWithActivationEvent:(int)activationEvent;	// 0x33f802b1
- (id)initWithDKPlistRepresentation:(id)dkplistRepresentation;	// 0x33f80405
- (void).cxx_destruct;	// 0x33f80579
// declared property getter: - (int)activationEvent;	// 0x33f80515
// declared property getter: - (id)btDeviceAddress;	// 0x33f80535
- (id)dkPlistRepresentation;	// 0x33f802fd
// declared property getter: - (BOOL)isEyesFree;	// 0x33f80559
// declared property setter: - (void)setActivationEvent:(int)event;	// 0x33f80525
// declared property setter: - (void)setBtDeviceAddress:(id)address;	// 0x33f80549
// declared property setter: - (void)setIsEyesFree:(BOOL)free;	// 0x33f80569
@end

