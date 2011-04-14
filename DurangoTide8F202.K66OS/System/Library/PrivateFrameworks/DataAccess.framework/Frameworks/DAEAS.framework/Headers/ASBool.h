/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingFrontingBasicType.h"


@interface ASBool : ASItem <ASParsingFrontingBasicType> {
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x32ee78b1
+ (BOOL)expectsContent;	// 0x32ee7705
+ (BOOL)frontingBasicTypes;	// 0x32ee77d9
+ (BOOL)notifyOfUnknownTokens;	// 0x32ee7791
+ (BOOL)parsingLeafNode;	// 0x32ee7869
+ (BOOL)parsingWithSubItems;	// 0x32ee7821
- (id)commonValue;	// 0x32ee7771
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x32ee7709
- (int)parsingState;	// 0x32ee7701
@end
