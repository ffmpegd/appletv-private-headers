/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCBReader.h"


__attribute__((visibility("hidden")))
@interface PBReader : OCBReader {
@private
	PptObjectFactory *mPptObjectFactory;	// 16 = 0x10
}
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x356ff689
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x355876ed
+ (id)readerWithPptReader:(PptBinaryReader *)pptReader pptObjectFactory:(PptObjectFactory *)factory;	// 0x3558b939
- (id)initWithPptReader:(PptBinaryReader *)pptReader pptObjectFactory:(PptObjectFactory *)factory;	// 0x3558b989
- (void)dealloc;	// 0x3557054d
@end

