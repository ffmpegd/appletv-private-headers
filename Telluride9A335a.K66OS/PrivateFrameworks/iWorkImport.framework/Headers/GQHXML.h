/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"

@protocol GQHXMLOutput;

__attribute__((visibility("hidden")))
@interface GQHXML : NSObject {
@private
	id<GQHXMLOutput> mOutput;	// 4 = 0x4
	BOOL mUseExternalCss;	// 8 = 0x8
	CFStringRef mFilename;	// 12 = 0xc
	CFStringRef mCssFilename;	// 16 = 0x10
	CFStringRef mCss;	// 20 = 0x14
	CFStringRef mLastCss;	// 24 = 0x18
	bool isProgressive;	// 28 = 0x1c
}
@property(readonly, assign) bool isProgressive;	// G=0x3049bf39; @synthesize
- (id)initEmptyWithFilename:(CFStringRef)filename useExternalCss:(BOOL)css;	// 0x3049bf49
- (id)initWithFilename:(CFStringRef)filename documentSize:(CGSize *)size outputBundle:(id)bundle useExternalCss:(BOOL)css;	// 0x3049c7dd
- (void)addCharRef:(const char *)ref;	// 0x3049c4b1
- (void)addContent:(CFStringRef)content;	// 0x3049c4f9
- (void)addStyleClass:(CFStringRef)aClass;	// 0x3049c49d
- (void)addStyleClassLast:(CFStringRef)last;	// 0x3049c489
- (void)addViewportMetaTagForDocumentSize:(CGSize)documentSize;	// 0x3049c3cd
- (void)addViewportMetaTagForDocumentSize:(CGSize)documentSize maximumScale:(float)scale;	// 0x3049c305
- (void)addXmlCharContent:(const char *)content;	// 0x3049c4d5
- (CFDataRef)createProgressiveHtml;	// 0x3049c0e1
- (CFDataRef)createProgressiveeCSSwithStyleTags:(unsigned char)tags;	// 0x3049c01d
- (CFStringRef)cssFilename;	// 0x3049bf29
- (void)dealloc;	// 0x3049c721
- (void)endElement;	// 0x3049c6dd
- (void)endElementWithExpectedName:(const char *)expectedName;	// 0x3049c6b9
// declared property getter: - (bool)isProgressive;	// 0x3049bf39
- (void)setAttribute:(const char *)attribute cfStringValue:(CFStringRef)value;	// 0x3049c5f1
- (void)setAttribute:(const char *)attribute floatValue:(float)value;	// 0x3049c591
- (void)setAttribute:(const char *)attribute intValue:(int)value;	// 0x3049c5c1
- (void)setAttribute:(const char *)attribute value:(const char *)value;	// 0x3049c68d
- (void)startElement:(const char *)element;	// 0x3049c6fd
- (BOOL)writeToOutputBundle:(id)outputBundle;	// 0x3049c101
@end

