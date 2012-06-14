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
@property(readonly, assign) bool isProgressive;	// G=0x33ff4eed; @synthesize
- (id)initEmptyWithFilename:(CFStringRef)filename useExternalCss:(BOOL)css;	// 0x33ff4efd
- (id)initWithFilename:(CFStringRef)filename documentSize:(CGSize *)size outputBundle:(id)bundle useExternalCss:(BOOL)css;	// 0x33ff57a1
- (void)addCharRef:(const char *)ref;	// 0x33ff5465
- (void)addContent:(CFStringRef)content;	// 0x33ff54ad
- (void)addStyleClass:(CFStringRef)aClass;	// 0x33ff5451
- (void)addStyleClassLast:(CFStringRef)last;	// 0x33ff543d
- (void)addViewportMetaTagForDocumentSize:(CGSize)documentSize;	// 0x33ff5381
- (void)addViewportMetaTagForDocumentSize:(CGSize)documentSize maximumScale:(float)scale;	// 0x33ff52b9
- (void)addXmlCharContent:(const char *)content;	// 0x33ff5489
- (CFDataRef)createProgressiveHtml;	// 0x33ff5095
- (CFDataRef)createProgressiveeCSSwithStyleTags:(unsigned char)tags;	// 0x33ff4fd1
- (CFStringRef)cssFilename;	// 0x33ff4edd
- (void)dealloc;	// 0x33ff56e5
- (void)endElement;	// 0x33ff56a1
- (void)endElementWithExpectedName:(const char *)expectedName;	// 0x33ff567d
// declared property getter: - (bool)isProgressive;	// 0x33ff4eed
- (void)setAttribute:(const char *)attribute cfStringValue:(CFStringRef)value;	// 0x33ff55a5
- (void)setAttribute:(const char *)attribute floatValue:(float)value;	// 0x33ff5545
- (void)setAttribute:(const char *)attribute intValue:(int)value;	// 0x33ff5575
- (void)setAttribute:(const char *)attribute value:(const char *)value;	// 0x33ff5651
- (void)startElement:(const char *)element;	// 0x33ff56c1
- (BOOL)writeToOutputBundle:(id)outputBundle;	// 0x33ff50b5
@end
