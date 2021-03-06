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
+ (BOOL)isAnchorRelative:(id)relative;	// 0x3541ccd5
- (id)initWithChartDrawable:(id)chartDrawable box:(CGRect)box parent:(id)parent;	// 0x352f8849
- (id)initWithOADDrawable:(id)oaddrawable parent:(id)parent;	// 0x3522bf99
- (id)initWithOADDrawable:(id)oaddrawable rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x3541cc35
- (CGPoint)anchorMarkerToPosition:(EDCellAnchorMarker)position rowGrid:(double *)grid columnGrid:(double *)grid3 start:(BOOL)start relative:(BOOL)relative;	// 0x3522c815
- (CGRect)getImageRect;	// 0x3522c4a1
- (CGRect)mapAnchorToRect:(id)rect rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x3522c595
- (void)mapAt:(id)at withState:(id)state;	// 0x3522c0ad
- (void)mapBounds;	// 0x3522c409
- (void)mapChartAt:(id)at withState:(id)state;	// 0x3529cba1
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x3541cd69
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x352a4d95
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x3522d861
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x35284e3d
- (void)setBoundingBox;	// 0x3541cc89
- (id)workbookMapper;	// 0x3541ccc5
- (id)worksheetMapper;	// 0x3522c021
@end

