/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CHXDataLabel : NSObject {
}
+ (id)chdDataLabelFromXmlDataLabelElement:(xmlNode *)xmlDataLabelElement state:(id)state;	// 0x345c50c9
+ (int)chdDataLabelPositionFromXmlDataLabelElement:(xmlNode *)xmlDataLabelElement;	// 0x345c559d
+ (Class)chdDataValuePropertiesClassWithState:(id)state;	// 0x345c4e99
+ (void)readFrom:(xmlNode *)from dataValuePropertiesCollection:(id)collection state:(id)state;	// 0x345c4f01
@end

