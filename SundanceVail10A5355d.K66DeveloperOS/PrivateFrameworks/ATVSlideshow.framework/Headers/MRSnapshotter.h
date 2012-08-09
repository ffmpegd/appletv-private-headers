/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRRenderer, EAGLContext, MRTexture;

@interface MRSnapshotter : NSObject {
	MRRenderer *_renderer;	// 4 = 0x4
	EAGLContext *_context;	// 8 = 0x8
	MRTexture *_texture;	// 12 = 0xc
	CGSize _size;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL isFlipped;	// G=0x321e7831; S=0x321e7865; 
@property(assign, nonatomic) CGSize size;	// G=0x321e7b71; S=0x321e7635; @synthesize=_size
- (id)initWithMontage:(id)montage andAssetManagementDelegate:(id)delegate isReadOnly:(BOOL)only;	// 0x321e7461
- (CGImageRef)CGImageSnapshotAtState:(id)state;	// 0x321e7b35
- (CGImageRef)CGImageSnapshotAtTime:(double)time;	// 0x321e7af9
- (CGImageRef)_CGImageSnapshot;	// 0x321e78a1
- (void)dealloc;	// 0x321e75b1
// declared property getter: - (BOOL)isFlipped;	// 0x321e7831
// declared property setter: - (void)setIsFlipped:(BOOL)flipped;	// 0x321e7865
// declared property setter: - (void)setSize:(CGSize)size;	// 0x321e7635
// declared property getter: - (CGSize)size;	// 0x321e7b71
@end
