/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingLeafNode.h"
#import <NSData.h> // Unknown library


@interface NSData (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x33651f9d
+ (BOOL)expectsContent;	// 0x336523c1
+ (BOOL)frontingBasicTypes;	// 0x33652099
+ (BOOL)notifyOfUnknownTokens;	// 0x336520ed
+ (BOOL)parsingLeafNode;	// 0x33651ff1
+ (BOOL)parsingWithSubItems;	// 0x33652045
- (id)initForLengthTokenOfLength:(unsigned)length;	// 0x336523c5
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x33652141
- (int)parsingState;	// 0x336523bd
@end

