/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOTileDBWriteEntry : NSObject {
	GEOTileKey _key;	// 4 = 0x4
	NSData *_data;	// 20 = 0x14
	unsigned _tileEdition;	// 24 = 0x18
	unsigned _tileSet;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x32c6a65d; @synthesize=_data
@property(readonly, assign, nonatomic) GEOTileKey key;	// G=0x32c6a641; @synthesize=_key
@property(readonly, assign, nonatomic) unsigned tileEdition;	// G=0x32c6a66d; @synthesize=_tileEdition
@property(readonly, assign, nonatomic) unsigned tileSet;	// G=0x32c6a67d; @synthesize=_tileSet
- (id)initWithKey:(GEOTileKey)key data:(id)data tileEdition:(unsigned)edition tileSet:(unsigned)set;	// 0x32c6a551
- (id).cxx_construct;	// 0x32c6a68d
// declared property getter: - (id)data;	// 0x32c6a65d
- (void)dealloc;	// 0x32c6a5f5
// declared property getter: - (GEOTileKey)key;	// 0x32c6a641
// declared property getter: - (unsigned)tileEdition;	// 0x32c6a66d
// declared property getter: - (unsigned)tileSet;	// 0x32c6a67d
@end

