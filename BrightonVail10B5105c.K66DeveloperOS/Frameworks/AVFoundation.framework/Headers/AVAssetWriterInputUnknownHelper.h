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
- (id)initWithConfigurationState:(id)configurationState;	// 0x302e4d31
- (id)initWithMediaType:(id)mediaType outputSettings:(id)settings sourceFormatHint:(opaqueCMFormatDescription *)hint;	// 0x302e4e71
- (BOOL)_canAddTrackAssociationWithTrackOfInput:(id)input type:(id)type exceptionReason:(id *)reason;	// 0x302e5695
- (BOOL)_compareLanguageCode:(id)code withExtendedLanguageTag:(id)extendedLanguageTag;	// 0x302e5231
- (BOOL)_validateLanguageCode:(id)code;	// 0x302e51c1
- (void)addTrackAssociationWithTrackOfInput:(id)input type:(id)type;	// 0x302e59d9
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)input type:(id)type;	// 0x302e59b5
- (void)setAlternateGroupID:(short)anId;	// 0x302e563d
- (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x302e5165
- (void)setExtendedLanguageTag:(id)tag;	// 0x302e5485
- (void)setLanguageCode:(id)code;	// 0x302e52f9
- (void)setMarksOutputTrackAsEnabled:(BOOL)enabled;	// 0x302e5611
- (void)setMediaTimeScale:(int)scale;	// 0x302e5091
- (void)setMetadata:(id)metadata;	// 0x302e5065
- (void)setNaturalSize:(CGSize)size;	// 0x302e5191
- (void)setSourcePixelBufferAttributes:(id)attributes;	// 0x302e5669
- (void)setTransform:(CGAffineTransform)transform;	// 0x302e501d
- (int)status;	// 0x302e5019
@end
