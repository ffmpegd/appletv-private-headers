/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, AVCaptureInput;

@interface AVMetadataObjectInternal : NSObject {
	XXStruct_pwHToB time;	// 4 = 0x4
	XXStruct_pwHToB duration;	// 28 = 0x1c
	CGRect bounds;	// 52 = 0x34
	NSString *type;	// 68 = 0x44
	AVCaptureInput *input;	// 72 = 0x48
}
@property(assign) CGRect bounds;	// G=0x342658a9; S=0x342658cd; @synthesize
@property(assign) XXStruct_pwHToB duration;	// G=0x34265841; S=0x34265865; @synthesize
@property(retain) AVCaptureInput *input;	// G=0x34265929; S=0x3426593d; @synthesize
@property(assign) XXStruct_pwHToB time;	// G=0x342657d9; S=0x342657fd; @synthesize
@property(retain) NSString *type;	// G=0x34265905; S=0x34265919; @synthesize
- (id)init;	// 0x342656bd
// declared property getter: - (CGRect)bounds;	// 0x342658a9
- (void)dealloc;	// 0x34265775
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x34265841
// declared property getter: - (id)input;	// 0x34265929
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x342658cd
// declared property setter: - (void)setDuration:(XXStruct_pwHToB)duration;	// 0x34265865
// declared property setter: - (void)setInput:(id)input;	// 0x3426593d
// declared property setter: - (void)setTime:(XXStruct_pwHToB)time;	// 0x342657fd
// declared property setter: - (void)setType:(id)type;	// 0x34265919
// declared property getter: - (XXStruct_pwHToB)time;	// 0x342657d9
// declared property getter: - (id)type;	// 0x34265905
@end

