/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPLayer.h"
#import "ATVSlideshow-Structs.h"

@class MCContainerSerializer;

@interface MPLayerSerializer : MPLayer {
	MCContainerSerializer *_layerSerializer;	// 48 = 0x30
}
- (id)container;	// 0x3604fabd
- (void)dealloc;	// 0x3604eee9
- (id)description;	// 0x3604ee39
- (void)finalize;	// 0x3604eea9
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x3604ef55
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x3604f839
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x3604f4e1
- (void)setAudioPlaylist:(id)playlist;	// 0x3604f9b9
- (void)setLayerSerializer:(id)serializer;	// 0x3604facd
@end
