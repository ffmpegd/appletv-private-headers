/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRMetadataProvider.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreBaseMetadataProvider : XXUnknownSuperclass <BRMetadataProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	BOOL _useAlternateMetadata;	// 8 = 0x8
}
@property(assign) BOOL useAlternateMetadata;	// G=0x1ea03d; S=0x1ea04d; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x1e9f61
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1e9f9d
- (id)controlFactory;	// 0x1ea079
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1ea05d
- (id)dataAtIndex:(long)index;	// 0x1ea07d
- (long)dataCount;	// 0x1ea061
- (void)dealloc;	// 0x1e9ff1
- (id)hashForDataAtIndex:(long)index;	// 0x1ea091
- (void)populateMetadataForControl:(id)control;	// 0x1ea08d
// converted property setter: - (void)setUseAlternateMetadata:(BOOL)metadata;	// 0x1ea04d
// converted property getter: - (BOOL)useAlternateMetadata;	// 0x1ea03d
@end

