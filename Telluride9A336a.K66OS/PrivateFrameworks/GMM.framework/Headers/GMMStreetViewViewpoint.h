/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface GMMStreetViewViewpoint : PBCodable {
	BOOL _hasScene;	// 4 = 0x4
	int _scene;	// 8 = 0x8
	BOOL _hasPanningCount;	// 12 = 0xc
	int _panningCount;	// 16 = 0x10
	BOOL _hasZoomingCount;	// 20 = 0x14
	int _zoomingCount;	// 24 = 0x18
	BOOL _hasNavigationCount;	// 28 = 0x1c
	int _navigationCount;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL hasNavigationCount;	// G=0x3386912d; S=0x3386913d; @synthesize=_hasNavigationCount
@property(assign, nonatomic) BOOL hasPanningCount;	// G=0x338690ed; S=0x338690fd; @synthesize=_hasPanningCount
@property(assign, nonatomic) BOOL hasScene;	// G=0x338690cd; S=0x338690dd; @synthesize=_hasScene
@property(assign, nonatomic) BOOL hasZoomingCount;	// G=0x3386910d; S=0x3386911d; @synthesize=_hasZoomingCount
@property(assign, nonatomic) int navigationCount;	// G=0x33868c8d; S=0x33868cb1; @synthesize=_navigationCount
@property(assign, nonatomic) int panningCount;	// G=0x33868bfd; S=0x33868c21; @synthesize=_panningCount
@property(assign, nonatomic) int scene;	// G=0x33868bb5; S=0x33868bd9; @synthesize=_scene
@property(assign, nonatomic) int zoomingCount;	// G=0x33868c45; S=0x33868c69; @synthesize=_zoomingCount
- (void)dealloc;	// 0x33868b89
- (id)description;	// 0x33868cd5
- (id)dictionaryRepresentation;	// 0x33868d45
// declared property getter: - (BOOL)hasNavigationCount;	// 0x3386912d
// declared property getter: - (BOOL)hasPanningCount;	// 0x338690ed
// declared property getter: - (BOOL)hasScene;	// 0x338690cd
// declared property getter: - (BOOL)hasZoomingCount;	// 0x3386910d
// declared property getter: - (int)navigationCount;	// 0x33868c8d
// declared property getter: - (int)panningCount;	// 0x33868bfd
- (BOOL)readFrom:(id)from;	// 0x33868ecd
// declared property getter: - (int)scene;	// 0x33868bb5
// declared property setter: - (void)setHasNavigationCount:(BOOL)count;	// 0x3386913d
// declared property setter: - (void)setHasPanningCount:(BOOL)count;	// 0x338690fd
// declared property setter: - (void)setHasScene:(BOOL)scene;	// 0x338690dd
// declared property setter: - (void)setHasZoomingCount:(BOOL)count;	// 0x3386911d
// declared property setter: - (void)setNavigationCount:(int)count;	// 0x33868cb1
// declared property setter: - (void)setPanningCount:(int)count;	// 0x33868c21
// declared property setter: - (void)setScene:(int)scene;	// 0x33868bd9
// declared property setter: - (void)setZoomingCount:(int)count;	// 0x33868c69
- (void)writeTo:(id)to;	// 0x33868ff5
// declared property getter: - (int)zoomingCount;	// 0x33868c45
@end

