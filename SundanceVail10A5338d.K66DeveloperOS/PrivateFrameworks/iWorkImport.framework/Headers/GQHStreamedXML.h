/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHXMLOutput.h"
#import <NSObject.h> // Unknown library


@interface GQHStreamedXML : NSObject <GQHXMLOutput> {
	xmlOutputBuffer *mOutputBuffer;	// 4 = 0x4
	CFDataRef mData;	// 8 = 0x8
	CFArrayRef mElementNameStack;	// 12 = 0xc
	int mLastOp;	// 16 = 0x10
	BOOL mNeedNewlineBeforeNextElement;	// 20 = 0x14
	xmlDoc *mXMLDoc;	// 24 = 0x18
}
- (id)initEmpty;	// 0x350c2081
- (id)initWithHead;	// 0x350c2191
- (void)addCharRef:(const char *)ref;	// 0x350c2725
- (void)addXmlCharContent:(const char *)content;	// 0x350c262d
- (CFDataRef)createHtml;	// 0x350c27e9
- (CFDataRef)createHtmlWithCss:(CFStringRef)css;	// 0x350c27e5
- (CFDataRef)createProgressiveHtml;	// 0x350c2861
- (void)dealloc;	// 0x350c2251
- (void)endElement;	// 0x350c23d9
- (void)endElementWithExpectedName:(const char *)expectedName;	// 0x350c2505
- (const char *)peekElementName;	// 0x350c2939
- (char *)popElementName;	// 0x350c28f1
- (void)pushElementName:(const char *)name;	// 0x350c28cd
- (void)setAttribute:(const char *)attribute value:(const char *)value;	// 0x350c2515
- (void)startElement:(const char *)element;	// 0x350c232d
@end
