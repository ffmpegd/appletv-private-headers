/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSData.h> // Unknown library

@class NSDate, NSString;

@interface NSPageData : NSData {
@private
	NSData *data;	// 4 = 0x4
	NSDate *_originalFileModDate;	// 8 = 0x8
	NSString *_originalFilePath;	// 12 = 0xc
}
@property(readonly, retain) NSData *data;	// G=0x328187ad; converted property
+ (int)_umask;	// 0x328185ed
+ (void)initialize;	// 0x32819365
- (id)init;	// 0x32818b61
- (id)initFromSerializerStream:(id)serializerStream length:(unsigned)length;	// 0x32819319
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x32818ab9
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x32818b0d
- (id)initWithContentsOfFile:(id)file;	// 0x32818971
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x32818959
- (id)initWithContentsOfMappedFile:(id)mappedFile withFileAttributes:(id)fileAttributes;	// 0x3281888d
- (id)initWithData:(id)data;	// 0x32818a75
- (id)initWithDataNoCopy:(id)dataNoCopy;	// 0x328187dd
- (id)_mappedFile;	// 0x328185f9
- (void)_setOriginalFileInfoFromFileAttributes:(id)fileAttributes;	// 0x32818a1d
- (const void *)bytes;	// 0x32818ba1
// converted property getter: - (id)data;	// 0x328187ad
- (void)dealloc;	// 0x328192ad
- (id)deserializer;	// 0x32818805
- (unsigned)length;	// 0x32818bc1
- (unsigned)writeFd:(int)fd;	// 0x328193a5
- (unsigned)writeFile:(id)file;	// 0x32818cad
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;	// 0x32818ce9
@end

