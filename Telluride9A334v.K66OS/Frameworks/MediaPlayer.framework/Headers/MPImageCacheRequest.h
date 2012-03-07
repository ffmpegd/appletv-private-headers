/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSOperation.h> // Unknown library

@class MPImageCache, MPImageModifier, UIColor, UIImage;
@protocol MPImageRequestDelegate, NSObject, NSCopying;

@interface MPImageCacheRequest : NSOperation {
	MPImageCache *_cache;	// 12 = 0xc
	id _completionHandler;	// 16 = 0x10
	int _contentMode;	// 20 = 0x14
	BOOL _decodeOnFetch;	// 24 = 0x18
	id<MPImageRequestDelegate> _delegate;	// 28 = 0x1c
	UIColor *_fillColor;	// 32 = 0x20
	CGSize _finalSize;	// 36 = 0x24
	MPImageModifier *_modifier;	// 44 = 0x2c
	id<NSObject, NSCopying> _uniqueKey;	// 48 = 0x30
	long long _tag;	// 52 = 0x34
}
@property(assign, nonatomic) MPImageCache *cache;	// G=0x34e6e011; S=0x34e6e021; @synthesize=_cache
@property(readonly, assign, nonatomic) BOOL canRequestSynchronously;	// G=0x34e6d221; 
@property(copy, nonatomic) id completionHandler;	// G=0x34e6e031; S=0x34e6e041; @synthesize=_completionHandler
@property(assign, nonatomic) int contentMode;	// G=0x34e6e11d; S=0x34e6e12d; @synthesize=_contentMode
@property(assign, nonatomic) BOOL decodeOnFetch;	// G=0x34e6e13d; S=0x34e6e14d; @synthesize=_decodeOnFetch
@property(assign, nonatomic) id<MPImageRequestDelegate> delegate;	// G=0x34e6e065; S=0x34e6e075; @synthesize=_delegate
@property(retain, nonatomic) UIColor *fillColor;	// G=0x34e6e085; S=0x34e6e095; @synthesize=_fillColor
@property(assign, nonatomic) CGSize finalSize;	// G=0x34e6e0b9; S=0x34e6e0d5; @synthesize=_finalSize
@property(retain, nonatomic) MPImageModifier *modifier;	// G=0x34e6e0e9; S=0x34e6e0f9; @synthesize=_modifier
@property(readonly, assign, nonatomic) UIImage *placeholderImage;	// G=0x34e6d225; 
@property(assign, nonatomic) long long tag;	// G=0x34e6e15d; S=0x34e6e175; @synthesize=_tag
@property(retain, nonatomic) id<NSObject, NSCopying> uniqueKey;	// G=0x34e6e189; S=0x34e6e199; @synthesize=_uniqueKey
- (id)init;	// 0x34e6ce19
- (BOOL)_canUseInputImageAsFinalOutput:(id)output;	// 0x34e6cf69
- (void)_getGeometryForCreatingNewImage:(id)creatingNewImage finalSize:(CGSize)size contentSize:(CGSize *)size3 contentSubRect:(CGRect *)rect imageFrame:(CGRect *)frame;	// 0x34e6d449
- (id)_newBitmapImageFromImage:(id)image finalSize:(CGSize)size;	// 0x34e6d839
- (void)_sendErrorToDelegate:(id)delegate;	// 0x34e6db1d
- (void)_sendImageToDelegate:(id)delegate;	// 0x34e6dd79
// declared property getter: - (id)cache;	// 0x34e6e011
// declared property getter: - (BOOL)canRequestSynchronously;	// 0x34e6d221
- (void)cancel;	// 0x34e6d2c1
// declared property getter: - (id)completionHandler;	// 0x34e6e031
// declared property getter: - (int)contentMode;	// 0x34e6e11d
- (id)copyImageFromImage:(id)image;	// 0x34e6d151
- (id)copyRawImageReturningError:(id *)error;	// 0x34e6d215
- (void)dealloc;	// 0x34e6cee1
// declared property getter: - (BOOL)decodeOnFetch;	// 0x34e6e13d
// declared property getter: - (id)delegate;	// 0x34e6e065
- (id)description;	// 0x34e6ce71
// declared property getter: - (id)fillColor;	// 0x34e6e085
// declared property getter: - (CGSize)finalSize;	// 0x34e6e0b9
- (unsigned)hash;	// 0x34e6d229
- (BOOL)isEqual:(id)equal;	// 0x34e6d249
- (void)main;	// 0x34e6d305
// declared property getter: - (id)modifier;	// 0x34e6e0e9
// declared property getter: - (id)placeholderImage;	// 0x34e6d225
// declared property setter: - (void)setCache:(id)cache;	// 0x34e6e021
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x34e6e041
// declared property setter: - (void)setContentMode:(int)mode;	// 0x34e6e12d
// declared property setter: - (void)setDecodeOnFetch:(BOOL)fetch;	// 0x34e6e14d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34e6e075
// declared property setter: - (void)setFillColor:(id)color;	// 0x34e6e095
// declared property setter: - (void)setFinalSize:(CGSize)size;	// 0x34e6e0d5
// declared property setter: - (void)setModifier:(id)modifier;	// 0x34e6e0f9
// declared property setter: - (void)setTag:(long long)tag;	// 0x34e6e175
// declared property setter: - (void)setUniqueKey:(id)key;	// 0x34e6e199
// declared property getter: - (long long)tag;	// 0x34e6e15d
// declared property getter: - (id)uniqueKey;	// 0x34e6e189
@end

