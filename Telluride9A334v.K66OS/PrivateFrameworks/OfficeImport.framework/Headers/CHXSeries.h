/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHXSeries : NSObject {
}
+ (id)chdSeriesFromXmlSeriesElement:(xmlNode *)xmlSeriesElement state:(id)state;	// 0x356e22b1
+ (Class)chxSeriesClassWithState:(id)state;	// 0x356c3f09
+ (id)readFrom:(xmlNode *)from state:(id)state;	// 0x356c3691
+ (void)resolveSeriesStyle:(id)style state:(id)state;	// 0x356c6b6d
@end

