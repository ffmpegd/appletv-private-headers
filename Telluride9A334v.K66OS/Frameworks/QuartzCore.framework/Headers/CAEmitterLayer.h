/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString, NSArray;

@interface CAEmitterLayer : CALayer {
}
@property(assign) float birthRate;	// G=0x31b35b39; S=0x31b35b31; 
@property(copy) NSArray *emitterCells;	// G=0x31b35b49; S=0x31b35b41; 
@property(assign) float emitterDepth;	// G=0x31b35ac1; S=0x31b35ab9; 
@property(copy) NSString *emitterMode;	// G=0x31b35b09; S=0x31b35b01; 
@property(assign) CGPoint emitterPosition;	// G=0x31b35af5; S=0x31b35aed; 
@property(copy) NSString *emitterShape;	// G=0x31b35b19; S=0x31b35b11; 
@property(assign) CGSize emitterSize;	// G=0x31b35ad1; S=0x31b35ac9; 
@property(assign) float emitterZPosition;	// G=0x31b35ae5; S=0x31b35add; 
@property(assign) float lifetime;	// G=0x31b35b29; S=0x31b35b21; 
@property(assign) BOOL preservesDepth;	// G=0x31b35a69; S=0x31b35a61; 
@property(copy) NSString *renderMode;	// G=0x31b35a81; S=0x31b35a79; 
@property(assign) float scale;	// G=0x31b35aa1; S=0x31b35a99; 
@property(assign) unsigned seed;	// G=0x31b35a59; S=0x31b35a51; 
@property(assign) float spin;	// G=0x31b35a91; S=0x31b35a89; 
@property(assign) float velocity;	// G=0x31b35ab1; S=0x31b35aa9; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x31b35915
+ (id)defaultValueForKey:(id)key;	// 0x31b3596d
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x31b35b9d
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x31b35b51
// declared property getter: - (float)birthRate;	// 0x31b35b39
- (void)didChangeValueForKey:(id)key;	// 0x31b358b5
// declared property getter: - (id)emitterCells;	// 0x31b35b49
// declared property getter: - (float)emitterDepth;	// 0x31b35ac1
// declared property getter: - (id)emitterMode;	// 0x31b35b09
// declared property getter: - (CGPoint)emitterPosition;	// 0x31b35af5
// declared property getter: - (id)emitterShape;	// 0x31b35b19
// declared property getter: - (CGSize)emitterSize;	// 0x31b35ad1
// declared property getter: - (float)emitterZPosition;	// 0x31b35ae5
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x31b35e99
// declared property getter: - (float)lifetime;	// 0x31b35b29
// declared property getter: - (BOOL)preservesDepth;	// 0x31b35a69
// declared property getter: - (id)renderMode;	// 0x31b35a81
// declared property getter: - (float)scale;	// 0x31b35aa1
// declared property getter: - (unsigned)seed;	// 0x31b35a59
// declared property setter: - (void)setBirthRate:(float)rate;	// 0x31b35b31
// declared property setter: - (void)setEmitterCells:(id)cells;	// 0x31b35b41
// declared property setter: - (void)setEmitterDepth:(float)depth;	// 0x31b35ab9
// declared property setter: - (void)setEmitterMode:(id)mode;	// 0x31b35b01
// declared property setter: - (void)setEmitterPosition:(CGPoint)position;	// 0x31b35aed
// declared property setter: - (void)setEmitterShape:(id)shape;	// 0x31b35b11
// declared property setter: - (void)setEmitterSize:(CGSize)size;	// 0x31b35ac9
// declared property setter: - (void)setEmitterZPosition:(float)position;	// 0x31b35add
// declared property setter: - (void)setLifetime:(float)lifetime;	// 0x31b35b21
// declared property setter: - (void)setPreservesDepth:(BOOL)depth;	// 0x31b35a61
// declared property setter: - (void)setRenderMode:(id)mode;	// 0x31b35a79
// declared property setter: - (void)setScale:(float)scale;	// 0x31b35a99
// declared property setter: - (void)setSeed:(unsigned)seed;	// 0x31b35a51
// declared property setter: - (void)setSpin:(float)spin;	// 0x31b35a89
// declared property setter: - (void)setVelocity:(float)velocity;	// 0x31b35aa9
// declared property getter: - (float)spin;	// 0x31b35a91
// declared property getter: - (float)velocity;	// 0x31b35ab1
@end
