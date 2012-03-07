/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDrawableMapper.h"


__attribute__((visibility("hidden")))
@interface EMDrawableMapper : CMDrawableMapper {
@private
	double *mRowGrid;	// 80 = 0x50
	double *mColumnGrid;	// 84 = 0x54
}
+ (BOOL)isAnchorRelative:(id)relative;	// 0x34e74cd5
- (id)initWithChartDrawable:(id)chartDrawable box:(CGRect)box parent:(id)parent;	// 0x34d50849
- (id)initWithOADDrawable:(id)oaddrawable parent:(id)parent;	// 0x34c83f99
- (id)initWithOADDrawable:(id)oaddrawable rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x34e74c35
- (CGPoint)anchorMarkerToPosition:(EDCellAnchorMarker)position rowGrid:(double *)grid columnGrid:(double *)grid3 start:(BOOL)start relative:(BOOL)relative;	// 0x34c84815
- (CGRect)getImageRect;	// 0x34c844a1
- (CGRect)mapAnchorToRect:(id)rect rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x34c84595
- (void)mapAt:(id)at withState:(id)state;	// 0x34c840ad
- (void)mapBounds;	// 0x34c84409
- (void)mapChartAt:(id)at withState:(id)state;	// 0x34cf4ba1
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x34e74d69
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x34cfcd95
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x34c85861
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x34cdce3d
- (void)setBoundingBox;	// 0x34e74c89
- (id)workbookMapper;	// 0x34e74cc5
- (id)worksheetMapper;	// 0x34c84021
@end

