/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"


@interface CALayerHost : CALayer {
}
@property(assign) unsigned contextId;	// G=0x36ccb791; S=0x36ccb789; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x36ccb731
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x36ccb819
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x36ccb7e1
// declared property getter: - (unsigned)contextId;	// 0x36ccb791
- (void)didChangeValueForKey:(id)key;	// 0x36ccb6e1
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x36ccb799
// declared property setter: - (void)setContextId:(unsigned)anId;	// 0x36ccb789
@end
