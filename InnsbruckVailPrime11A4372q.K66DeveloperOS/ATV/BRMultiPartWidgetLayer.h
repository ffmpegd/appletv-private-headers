/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVImage;

__attribute__((visibility("hidden")))
@interface BRMultiPartWidgetLayer : BRControl {
	BOOL _suppressAnimations;	// 84 = 0x54
	BRControl *_topRightCornerControl;	// 88 = 0x58
	BRControl *_topEdgeControl;	// 92 = 0x5c
	BRControl *_topLeftCornerControl;	// 96 = 0x60
	BRControl *_rightEdgeControl;	// 100 = 0x64
	BRControl *_bottomRightCornerControl;	// 104 = 0x68
	BRControl *_bottomEdgeControl;	// 108 = 0x6c
	BRControl *_bottomLeftCornerControl;	// 112 = 0x70
	BRControl *_leftEdgeControl;	// 116 = 0x74
	BRControl *_centerControl;	// 120 = 0x78
	BRControl *_bottomDecoControl;	// 124 = 0x7c
	BRControl *_topDecoControl;	// 128 = 0x80
	float _centerOverlapFactorWidth;	// 132 = 0x84
	float _centerOverlapFactorHeight;	// 136 = 0x88
	float _sourceArtSceneHeight;	// 140 = 0x8c
}
@property(assign, nonatomic) ATVImage *bottomDeco;	// G=0x3c4625; S=0x3c45f9; 
@property(assign, nonatomic) BRControl *bottomDecoControl;	// G=0x3c524d; S=0x3c525d; @synthesize=_bottomDecoControl
@property(assign, nonatomic) ATVImage *bottomEdge;	// G=0x3c45c1; S=0x3c4595; 
@property(assign, nonatomic) BRControl *bottomEdgeControl;	// G=0x3c51cd; S=0x3c51dd; @synthesize=_bottomEdgeControl
@property(assign, nonatomic) ATVImage *bottomLeftCorner;	// G=0x3c4431; S=0x3c4405; 
@property(assign, nonatomic) BRControl *bottomLeftCornerControl;	// G=0x3c51ed; S=0x3c51fd; @synthesize=_bottomLeftCornerControl
@property(assign, nonatomic) ATVImage *bottomRightCorner;	// G=0x3c43cd; S=0x3c43a1; 
@property(assign, nonatomic) BRControl *bottomRightCornerControl;	// G=0x3c51ad; S=0x3c51bd; @synthesize=_bottomRightCornerControl
@property(assign, nonatomic) BRControl *centerControl;	// G=0x3c522d; S=0x3c523d; @synthesize=_centerControl
@property(assign, nonatomic) ATVImage *centerImage;	// G=0x3c46ed; S=0x3c46c1; 
@property(assign, nonatomic) float centerOverlapFactorHeight;	// G=0x3c529d; S=0x3c49f5; @synthesize=_centerOverlapFactorHeight
@property(assign, nonatomic) float centerOverlapFactorWidth;	// G=0x3c528d; S=0x3c49d5; @synthesize=_centerOverlapFactorWidth
@property(assign, nonatomic) ATVImage *leftEdge;	// G=0x3c44f9; S=0x3c44cd; 
@property(assign, nonatomic) BRControl *leftEdgeControl;	// G=0x3c520d; S=0x3c521d; @synthesize=_leftEdgeControl
@property(assign, nonatomic) ATVImage *rightEdge;	// G=0x3c4495; S=0x3c4469; 
@property(assign, nonatomic) BRControl *rightEdgeControl;	// G=0x3c518d; S=0x3c519d; @synthesize=_rightEdgeControl
@property(assign, nonatomic) float sourceArtSceneHeight;	// G=0x3c52ad; S=0x3c52bd; @synthesize=_sourceArtSceneHeight
@property(assign, nonatomic) ATVImage *topDeco;	// G=0x3c4689; S=0x3c465d; 
@property(assign, nonatomic) BRControl *topDecoControl;	// G=0x3c526d; S=0x3c527d; @synthesize=_topDecoControl
@property(assign, nonatomic) ATVImage *topEdge;	// G=0x3c455d; S=0x3c4531; 
@property(assign, nonatomic) BRControl *topEdgeControl;	// G=0x3c514d; S=0x3c515d; @synthesize=_topEdgeControl
@property(assign, nonatomic) ATVImage *topLeftCorner;	// G=0x3c4369; S=0x3c433d; 
@property(assign, nonatomic) BRControl *topLeftCornerControl;	// G=0x3c516d; S=0x3c517d; @synthesize=_topLeftCornerControl
@property(assign, nonatomic) ATVImage *topRightCorner;	// G=0x3c4305; S=0x3c42d9; 
@property(assign, nonatomic) BRControl *topRightCornerControl;	// G=0x3c512d; S=0x3c513d; @synthesize=_topRightCornerControl
- (id)init;	// 0x3c427d
- (id)_defaultActions;	// 0x3c52cd
- (void)_setImage:(id)image inControlNamed:(id)controlNamed withAntialiasingMask:(unsigned)antialiasingMask;	// 0x3c53cd
- (float)animationDuration;	// 0x3c4b3d
- (id)animationTimingFunction;	// 0x3c4b45
// declared property getter: - (id)bottomDeco;	// 0x3c4625
// declared property getter: - (id)bottomDecoControl;	// 0x3c524d
// declared property getter: - (id)bottomEdge;	// 0x3c45c1
// declared property getter: - (id)bottomEdgeControl;	// 0x3c51cd
// declared property getter: - (id)bottomLeftCorner;	// 0x3c4431
// declared property getter: - (id)bottomLeftCornerControl;	// 0x3c51ed
// declared property getter: - (id)bottomRightCorner;	// 0x3c43cd
// declared property getter: - (id)bottomRightCornerControl;	// 0x3c51ad
// declared property getter: - (id)centerControl;	// 0x3c522d
// declared property getter: - (id)centerImage;	// 0x3c46ed
// declared property getter: - (float)centerOverlapFactorHeight;	// 0x3c529d
// declared property getter: - (float)centerOverlapFactorWidth;	// 0x3c528d
- (void)clearImageMap;	// 0x3c4725
- (CGSize)edgeSize;	// 0x3c4821
- (void)layoutSubcontrols;	// 0x3c4b71
// declared property getter: - (id)leftEdge;	// 0x3c44f9
// declared property getter: - (id)leftEdgeControl;	// 0x3c520d
// declared property getter: - (id)rightEdge;	// 0x3c4495
// declared property getter: - (id)rightEdgeControl;	// 0x3c518d
// declared property setter: - (void)setBottomDeco:(id)deco;	// 0x3c45f9
// declared property setter: - (void)setBottomDecoControl:(id)control;	// 0x3c525d
// declared property setter: - (void)setBottomEdge:(id)edge;	// 0x3c4595
// declared property setter: - (void)setBottomEdgeControl:(id)control;	// 0x3c51dd
// declared property setter: - (void)setBottomLeftCorner:(id)corner;	// 0x3c4405
// declared property setter: - (void)setBottomLeftCornerControl:(id)control;	// 0x3c51fd
// declared property setter: - (void)setBottomRightCorner:(id)corner;	// 0x3c43a1
// declared property setter: - (void)setBottomRightCornerControl:(id)control;	// 0x3c51bd
// declared property setter: - (void)setCenterControl:(id)control;	// 0x3c523d
// declared property setter: - (void)setCenterImage:(id)image;	// 0x3c46c1
- (void)setCenterOverlapFactor:(float)factor;	// 0x3c49a1
// declared property setter: - (void)setCenterOverlapFactorHeight:(float)height;	// 0x3c49f5
// declared property setter: - (void)setCenterOverlapFactorWidth:(float)width;	// 0x3c49d5
// declared property setter: - (void)setLeftEdge:(id)edge;	// 0x3c44cd
// declared property setter: - (void)setLeftEdgeControl:(id)control;	// 0x3c521d
// declared property setter: - (void)setRightEdge:(id)edge;	// 0x3c4469
// declared property setter: - (void)setRightEdgeControl:(id)control;	// 0x3c519d
// declared property setter: - (void)setSourceArtSceneHeight:(float)height;	// 0x3c52bd
- (void)setSuppressAnimations:(BOOL)animations;	// 0x3c4a15
// declared property setter: - (void)setTopDeco:(id)deco;	// 0x3c465d
// declared property setter: - (void)setTopDecoControl:(id)control;	// 0x3c527d
// declared property setter: - (void)setTopEdge:(id)edge;	// 0x3c4531
// declared property setter: - (void)setTopEdgeControl:(id)control;	// 0x3c515d
// declared property setter: - (void)setTopLeftCorner:(id)corner;	// 0x3c433d
// declared property setter: - (void)setTopLeftCornerControl:(id)control;	// 0x3c517d
// declared property setter: - (void)setTopRightCorner:(id)corner;	// 0x3c42d9
// declared property setter: - (void)setTopRightCornerControl:(id)control;	// 0x3c513d
// declared property getter: - (float)sourceArtSceneHeight;	// 0x3c52ad
// declared property getter: - (id)topDeco;	// 0x3c4689
// declared property getter: - (id)topDecoControl;	// 0x3c526d
// declared property getter: - (id)topEdge;	// 0x3c455d
// declared property getter: - (id)topEdgeControl;	// 0x3c514d
// declared property getter: - (id)topLeftCorner;	// 0x3c4369
// declared property getter: - (id)topLeftCornerControl;	// 0x3c516d
// declared property getter: - (id)topRightCorner;	// 0x3c4305
// declared property getter: - (id)topRightCornerControl;	// 0x3c512d
- (void)updateAnimations;	// 0x3c4a5d
@end

