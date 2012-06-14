/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSSet, NSString;

@interface AVMediaFileType : NSObject <NSCopying> {
@private
	NSString *_uti;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *UTI;	// G=0x326e45bd; 
@property(readonly, assign, nonatomic) unsigned long audioFileTypeID;	// G=0x326e4605; 
@property(readonly, assign, nonatomic) NSString *defaultFileExtension;	// G=0x326e43e5; 
@property(readonly, assign, nonatomic) NSString *figFormatReaderFileFormat;	// G=0x326e45cd; 
@property(readonly, assign, nonatomic) NSSet *supportedMediaTypes;	// G=0x326e442d; 
+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)fileTypeIdentifier exceptionReason:(id *)reason;	// 0x326e4139
+ (id)allFileTypeIdentifiers;	// 0x326e40e1
+ (void)initialize;	// 0x326e3f41
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)fileTypeIdentifier;	// 0x326e4125
- (id)initWithFileTypeIdentifier:(id)fileTypeIdentifier exceptionReason:(id *)reason;	// 0x326e4189
// declared property getter: - (id)UTI;	// 0x326e45bd
// declared property getter: - (unsigned long)audioFileTypeID;	// 0x326e4605
- (id)copyWithZone:(NSZone *)zone;	// 0x326e436d
- (void)dealloc;	// 0x326e4321
// declared property getter: - (id)defaultFileExtension;	// 0x326e43e5
- (id)description;	// 0x326e437d
// declared property getter: - (id)figFormatReaderFileFormat;	// 0x326e45cd
// declared property getter: - (id)supportedMediaTypes;	// 0x326e442d
- (BOOL)supportsOutputSettings:(id)settings reason:(id *)reason;	// 0x326e4675
@end
