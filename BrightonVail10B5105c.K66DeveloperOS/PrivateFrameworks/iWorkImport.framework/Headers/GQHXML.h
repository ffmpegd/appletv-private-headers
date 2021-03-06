/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@protocol GQHXMLOutput;

@interface GQHXML : NSObject {
	id<GQHXMLOutput> mOutput;	// 4 = 0x4
	BOOL mUseExternalCss;	// 8 = 0x8
	CFStringRef mFilename;	// 12 = 0xc
	CFStringRef mCssFilename;	// 16 = 0x10
	CFStringRef mCss;	// 20 = 0x14
	CFStringRef mLastCss;	// 24 = 0x18
	bool isProgressive;	// 28 = 0x1c
}
@property(readonly, assign) bool isProgressive;	// G=0x32d0b2d5; @synthesize
- (id)initEmptyWithFilename:(CFStringRef)filename useExternalCss:(BOOL)css;	// 0x32d0a791
- (id)initWithFilename:(CFStringRef)filename documentSize:(CGSize *)size outputBundle:(id)bundle useExternalCss:(BOOL)css;	// 0x32d0a849
- (void)addCharRef:(const char *)ref;	// 0x32d0ae35
- (void)addContent:(CFStringRef)content;	// 0x32d0ad6d
- (void)addStyleClass:(CFStringRef)aClass;	// 0x32d0ae55
- (void)addStyleClassLast:(CFStringRef)last;	// 0x32d0ae69
- (void)addViewportMetaTagForDocumentSize:(CGSize)documentSize;	// 0x32d0ae95
- (void)addViewportMetaTagForDocumentSize:(CGSize)documentSize maximumScale:(float)scale;	// 0x32d0af51
- (void)addXmlCharContent:(const char *)content;	// 0x32d0ae15
- (CFDataRef)createProgressiveHtml;	// 0x32d0b1fd
- (CFDataRef)createProgressiveeCSSwithStyleTags:(unsigned char)tags;	// 0x32d0b21d
- (CFStringRef)cssFilename;	// 0x32d0ae85
- (void)dealloc;	// 0x32d0aae1
- (void)endElement;	// 0x32d0abb1
- (void)endElementWithExpectedName:(const char *)expectedName;	// 0x32d0abd1
// declared property getter: - (bool)isProgressive;	// 0x32d0b2d5
- (void)setAttribute:(const char *)attribute cfStringValue:(CFStringRef)value;	// 0x32d0ac11
- (void)setAttribute:(const char *)attribute floatValue:(float)value;	// 0x32d0ad19
- (void)setAttribute:(const char *)attribute intValue:(int)value;	// 0x32d0acc5
- (void)setAttribute:(const char *)attribute value:(const char *)value;	// 0x32d0abf1
- (void)startElement:(const char *)element;	// 0x32d0ab91
- (BOOL)writeToOutputBundle:(id)outputBundle;	// 0x32d0b019
@end

