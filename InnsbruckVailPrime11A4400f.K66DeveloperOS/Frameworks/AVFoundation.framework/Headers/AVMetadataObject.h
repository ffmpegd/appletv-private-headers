/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, AVMetadataObjectInternal;

@interface AVMetadataObject : NSObject {
	AVMetadataObjectInternal *_objectInternal;	// 4 = 0x4
}
@property(readonly, assign) CGRect bounds;	// G=0x2c31b62d; 
@property(readonly, assign) XXStruct_pwHToB duration;	// G=0x2c31b5f5; 
@property(readonly, assign) XXStruct_pwHToB time;	// G=0x2c31b5bd; 
@property(readonly, assign) NSString *type;	// G=0x2c31b65d; 
+ (id)derivedMetadataObjectFromMetadataObject:(id)metadataObject withTransform:(CGAffineTransform)transform isVideoMirrored:(BOOL)mirrored rollAdjustment:(float)adjustment;	// 0x2c31b299
- (id)init;	// 0x2c31b199
- (id)initDerivedMetadataObjectFromMetadataObject:(id)metadataObject withTransform:(CGAffineTransform)transform isVideoMirrored:(BOOL)mirrored rollAdjustment:(float)adjustment;	// 0x2c31b31d
// declared property getter: - (CGRect)bounds;	// 0x2c31b62d
- (void)dealloc;	// 0x2c31b571
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x2c31b5f5
- (id)input;	// 0x2c31b67d
- (id)originalMetadataObject;	// 0x2c31b69d
// declared property getter: - (XXStruct_pwHToB)time;	// 0x2c31b5bd
// declared property getter: - (id)type;	// 0x2c31b65d
@end
