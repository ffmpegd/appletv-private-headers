/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import </libobjc.A.h>
#import "GQHXMLOutput.h"


@interface GQHStreamedXML : NSObject <GQHXMLOutput> {
	xmlOutputBuffer *mOutputBuffer;	// 4 = 0x4
	CFDataRef mData;	// 8 = 0x8
	CFArrayRef mElementNameStack;	// 12 = 0xc
	int mLastOp;	// 16 = 0x10
	BOOL mNeedNewlineBeforeNextElement;	// 20 = 0x14
	xmlDoc *mXMLDoc;	// 24 = 0x18
}
- (id)initEmpty;	// 0x33cf62bd
- (id)initWithHead;	// 0x33cf63cd
- (void)addCharRef:(const char *)ref;	// 0x33cf6961
- (void)addXmlCharContent:(const char *)content;	// 0x33cf6869
- (CFDataRef)createHtml;	// 0x33cf6a25
- (CFDataRef)createHtmlWithCss:(CFStringRef)css;	// 0x33cf6a21
- (CFDataRef)createProgressiveHtml;	// 0x33cf6a9d
- (void)dealloc;	// 0x33cf648d
- (void)endElement;	// 0x33cf6615
- (void)endElementWithExpectedName:(const char *)expectedName;	// 0x33cf6745
- (const char *)peekElementName;	// 0x33cf6b7d
- (char *)popElementName;	// 0x33cf6b35
- (void)pushElementName:(const char *)name;	// 0x33cf6b11
- (void)setAttribute:(const char *)attribute value:(const char *)value;	// 0x33cf6755
- (void)startElement:(const char *)element;	// 0x33cf6569
@end
