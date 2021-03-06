/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDrawableMapper.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EMDrawableMapper : CMDrawableMapper {
@private
	double *mRowGrid;	// 80 = 0x50
	double *mColumnGrid;	// 84 = 0x54
}
+ (BOOL)isAnchorRelative:(id)relative;	// 0x3466acd5
- (id)initWithChartDrawable:(id)chartDrawable box:(CGRect)box parent:(id)parent;	// 0x34546849
- (id)initWithOADDrawable:(id)oaddrawable parent:(id)parent;	// 0x34479f99
- (id)initWithOADDrawable:(id)oaddrawable rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x3466ac35
- (CGPoint)anchorMarkerToPosition:(EDCellAnchorMarker)position rowGrid:(double *)grid columnGrid:(double *)grid3 start:(BOOL)start relative:(BOOL)relative;	// 0x3447a815
- (CGRect)getImageRect;	// 0x3447a4a1
- (CGRect)mapAnchorToRect:(id)rect rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x3447a595
- (void)mapAt:(id)at withState:(id)state;	// 0x3447a0ad
- (void)mapBounds;	// 0x3447a409
- (void)mapChartAt:(id)at withState:(id)state;	// 0x344eaba1
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x3466ad69
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x344f2d95
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x3447b861
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x344d2e3d
- (void)setBoundingBox;	// 0x3466ac89
- (id)workbookMapper;	// 0x3466acc5
- (id)worksheetMapper;	// 0x3447a021
@end

