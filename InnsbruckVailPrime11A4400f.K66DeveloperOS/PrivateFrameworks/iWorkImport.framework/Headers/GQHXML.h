/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import </libobjc.A.h>

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
@property(readonly, assign) bool isProgressive;	// G=0x33cdee15; @synthesize
- (id)initEmptyWithFilename:(CFStringRef)filename useExternalCss:(BOOL)css;	// 0x33cde2c9
- (id)initWithFilename:(CFStringRef)filename documentSize:(CGSize *)size outputBundle:(id)bundle useExternalCss:(BOOL)css;	// 0x33cde381
- (void)addCharRef:(const char *)ref;	// 0x33cde975
- (void)addContent:(CFStringRef)content;	// 0x33cde8a9
- (void)addStyleClass:(CFStringRef)aClass;	// 0x33cde995
- (void)addStyleClassLast:(CFStringRef)last;	// 0x33cde9a9
- (void)addViewportMetaTagForDocumentSize:(CGSize)documentSize;	// 0x33cde9d5
- (void)addViewportMetaTagForDocumentSize:(CGSize)documentSize maximumScale:(float)scale;	// 0x33cdea91
- (void)addXmlCharContent:(const char *)content;	// 0x33cde955
- (CFDataRef)createProgressiveHtml;	// 0x33cded3d
- (CFDataRef)createProgressiveeCSSwithStyleTags:(unsigned char)tags;	// 0x33cded5d
- (CFStringRef)cssFilename;	// 0x33cde9c5
- (void)dealloc;	// 0x33cde61d
- (void)endElement;	// 0x33cde6ed
- (void)endElementWithExpectedName:(const char *)expectedName;	// 0x33cde70d
// declared property getter: - (bool)isProgressive;	// 0x33cdee15
- (void)setAttribute:(const char *)attribute cfStringValue:(CFStringRef)value;	// 0x33cde74d
- (void)setAttribute:(const char *)attribute floatValue:(float)value;	// 0x33cde855
- (void)setAttribute:(const char *)attribute intValue:(int)value;	// 0x33cde801
- (void)setAttribute:(const char *)attribute value:(const char *)value;	// 0x33cde72d
- (void)startElement:(const char *)element;	// 0x33cde6cd
- (BOOL)writeToOutputBundle:(id)outputBundle;	// 0x33cdeb59
@end

