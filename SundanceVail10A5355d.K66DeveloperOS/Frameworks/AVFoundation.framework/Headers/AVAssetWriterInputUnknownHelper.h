/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterInputHelper.h"
#import "AVFoundation-Structs.h"


@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper {
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x3268326d
- (id)initWithMediaType:(id)mediaType outputSettings:(id)settings sourceFormatHint:(opaqueCMFormatDescription *)hint;	// 0x326833ad
- (BOOL)_canAddTrackAssociationWithTrackOfInput:(id)input type:(id)type exceptionReason:(id *)reason;	// 0x32683bd1
- (BOOL)_compareLanguageCode:(id)code withExtendedLanguageTag:(id)extendedLanguageTag;	// 0x3268376d
- (BOOL)_validateLanguageCode:(id)code;	// 0x326836fd
- (void)addTrackAssociationWithTrackOfInput:(id)input type:(id)type;	// 0x32683f15
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)input type:(id)type;	// 0x32683ef1
- (void)setAlternateGroupID:(short)anId;	// 0x32683b79
- (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x326836a1
- (void)setExtendedLanguageTag:(id)tag;	// 0x326839c1
- (void)setLanguageCode:(id)code;	// 0x32683835
- (void)setMarksOutputTrackAsEnabled:(BOOL)enabled;	// 0x32683b4d
- (void)setMediaTimeScale:(int)scale;	// 0x326835cd
- (void)setMetadata:(id)metadata;	// 0x326835a1
- (void)setNaturalSize:(CGSize)size;	// 0x326836cd
- (void)setSourcePixelBufferAttributes:(id)attributes;	// 0x32683ba5
- (void)setTransform:(CGAffineTransform)transform;	// 0x32683559
- (int)status;	// 0x32683555
@end
