/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CPColorPalettizer : NSObject {
	tagOctree *m_pTree;	// 4 = 0x4
	bool isDefaultPaletteSize;	// 8 = 0x8
}
- (id)initWitDefaultPaletteSize;	// 0x349fa985
- (id)initWitMaxPaletteSize:(unsigned)size;	// 0x349fa91d
- (int)addPixelToOctree:(tagOctree *)octree pixel:(tagRgbQuad)pixel;	// 0x349fb329
- (bool)addQuadColor:(tagRgbQuad)color;	// 0x349fab0d
- (bool)addTSUColor:(id)color;	// 0x349faa39
- (int)createNodeOctree:(tagOctreeNode **)octree parent:(tagOctreeNode *)parent;	// 0x349fb285
- (int)createOctree:(tagOctree **)octree maxPaletteSize:(unsigned short)size;	// 0x349fb171
- (void)createPalette;	// 0x349fabc5
- (void)dealloc;	// 0x349fa9e9
- (int)deleteListOctree:(tagLevelItem *)octree;	// 0x349fb2fd
- (int)deleteNodeOctree:(tagOctreeNode *)octree;	// 0x349fb2ad
- (int)deleteOctree:(tagOctree *)octree;	// 0x349fb219
- (id)getPaletteData;	// 0x349fae89
- (id)getPaletteDataRaw;	// 0x349fac35
- (unsigned short)getPaletteFromOctree:(tagOctreeNode *)octree paletteEntry:(tagRgbQuad *)entry index:(unsigned short)index;	// 0x349fb585
- (id)getPngPaletteData;	// 0x349fad3d
- (unsigned)paletteColorCount;	// 0x349fac01
- (int)paletteIndexFromQuadColor:(tagRgbQuad)quadColor;	// 0x349fb0dd
- (int)paletteIndexFromTSUColor:(id)tsucolor;	// 0x349faffd
- (int)reduceOctree:(tagOctree *)octree;	// 0x349fb441
- (int)rgbToIndexOctree:(tagOctree *)indexOctree source:(tagRgbQuad)source destination:(char *)destination;	// 0x349fb629
@end

