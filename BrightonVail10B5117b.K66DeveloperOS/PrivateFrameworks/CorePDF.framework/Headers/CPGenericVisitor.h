/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CPVisitor.h"


@interface CPGenericVisitor : NSObject <CPVisitor> {
}
- (void)visitBody:(id)body;	// 0x33a150f9
- (void)visitChunk:(id)chunk;	// 0x33a15025
- (void)visitColumn:(id)column;	// 0x33a15129
- (void)visitCompoundGraphic:(id)graphic;	// 0x33a15099
- (void)visitImage:(id)image;	// 0x33a15095
- (void)visitImageRegion:(id)region;	// 0x33a15149
- (void)visitLayoutArea:(id)area;	// 0x33a15119
- (void)visitPage:(id)page;	// 0x33a150a9
- (void)visitParagraph:(id)paragraph;	// 0x33a15109
- (void)visitRegion:(id)region;	// 0x33a150b9
- (void)visitRotation:(id)rotation;	// 0x33a150e9
- (void)visitShape:(id)shape;	// 0x33a15085
- (void)visitShapeRegion:(id)region;	// 0x33a15159
- (void)visitTextBox:(id)box;	// 0x33a15139
- (void)visitTextLine:(id)line;	// 0x33a150c9
- (void)visitZone:(id)zone;	// 0x33a150d9
@end
