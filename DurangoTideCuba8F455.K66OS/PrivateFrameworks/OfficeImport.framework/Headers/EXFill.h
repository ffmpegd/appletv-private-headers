/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EXFill : NSObject {
}
+ (id)edFillFromXmlFillElement:(xmlNode *)xmlFillElement differentialFill:(bool)fill state:(id)state;	// 0x32c6a095
+ (id)edFillFromXmlFillElement:(xmlNode *)xmlFillElement state:(id)state;	// 0x32c6a075
+ (id)edGradientFillFromXmlElement:(xmlNode *)xmlElement state:(id)state;	// 0x32cf7ef5
+ (int)edGradientTypeFromXmlGradientTypeString:(id)xmlGradientTypeString state:(id)state;	// 0x32cf7ead
+ (id)edPatternFillFromXmlElement:(xmlNode *)xmlElement differentialFill:(bool)fill state:(id)state;	// 0x32c6a165
+ (int)edPatternTypeFromXmlPatternTypeString:(id)xmlPatternTypeString;	// 0x32c6a335
+ (id)edStopFromXmlGradientElement:(xmlNode *)xmlGradientElement state:(id)state;	// 0x32cf8065
@end
