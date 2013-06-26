/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, BRControl, NSTimer, RUIPhloatoArtLoader, RUIPhloatoPlaneDelegate;

__attribute__((visibility("hidden")))
@interface RUIPhloatoPlane : XXUnknownSuperclass {
	BRControl *_planeLayer;	// 4 = 0x4
	RUIPhloatoArtLoader *_provider;	// 8 = 0x8
	NSMutableArray *_photoLayers;	// 12 = 0xc
	RUIPhloatoPlaneDelegate *_animationDelegate;	// 16 = 0x10
	NSTimer *_pullTimer;	// 20 = 0x14
	float _frameMultiplier;	// 24 = 0x18
	float _zPosition;	// 28 = 0x1c
	BOOL _pullsImages;	// 32 = 0x20
	const RUIPhloatoPlaneImagePosition *_table;	// 36 = 0x24
	long _currentEntryIndex;	// 40 = 0x28
	long _entryCount;	// 44 = 0x2c
}
@property(assign) float frameMultiplier;	// G=0x402345; S=0x402335; converted property
@property(retain) RUIPhloatoArtLoader *provider;	// G=0x4021e5; S=0x4021ad; converted property
@property(assign) BOOL pullsImages;	// G=0x402225; S=0x4021f9; converted property
@property(assign) float zPosition;	// G=0x402325; S=0x402235; converted property
- (id)initWithPlaneLayer:(id)planeLayer positionTable:(const RUIPhloatoPlaneImagePosition *)table count:(long)count;	// 0x40202d
- (void).cxx_destruct;	// 0x402355
- (void)_addNextImage:(id)image;	// 0x4024b9
- (void)_createImagePuller;	// 0x40241d
- (void)_updateImagePuller;	// 0x4023c1
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x4028f5
- (void)dealloc;	// 0x402141
// converted property getter: - (float)frameMultiplier;	// 0x402345
// converted property getter: - (id)provider;	// 0x4021e5
// converted property getter: - (BOOL)pullsImages;	// 0x402225
// converted property setter: - (void)setFrameMultiplier:(float)multiplier;	// 0x402335
// converted property setter: - (void)setProvider:(id)provider;	// 0x4021ad
// converted property setter: - (void)setPullsImages:(BOOL)images;	// 0x4021f9
// converted property setter: - (void)setZPosition:(float)position;	// 0x402235
// converted property getter: - (float)zPosition;	// 0x402325
@end
