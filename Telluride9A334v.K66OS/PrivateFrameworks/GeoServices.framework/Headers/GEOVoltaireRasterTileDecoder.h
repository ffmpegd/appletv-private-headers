/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GEOTileDecoder.h"
#import "GeoServices-Structs.h"


@interface GEOVoltaireRasterTileDecoder : NSObject <GEOTileDecoder> {
}
- (BOOL)canDecodeTile:(const GEOTileKey *)tile quickly:(BOOL *)quickly;	// 0x32c7d049
- (id)decodeTile:(id)tile forKey:(const GEOTileKey *)key;	// 0x32c7d081
@end

