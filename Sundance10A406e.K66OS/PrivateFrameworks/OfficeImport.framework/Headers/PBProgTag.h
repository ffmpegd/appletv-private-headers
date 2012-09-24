/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface PBProgTag : NSObject {
}
+ (id)binaryTagDataWithName:(const unsigned short *)name inProgTags:(id)progTags;	// 0x34e70c01
+ (id)binaryTagDataWithName:(const unsigned short *)name inProgTagsParent:(id)progTagsParent;	// 0x34e70bc1
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)name inProgTags:(id)progTags;	// 0x350d2471
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)name inProgTagsParent:(id)progTagsParent;	// 0x350d241d
+ (void)readBulletImagesFromContainerParent:(id)containerParent state:(id)state;	// 0x34faf56d
+ (void)readBulletImagesFromDocumentList:(id)documentList state:(id)state;	// 0x34e70d6d
+ (id)readBulletStyleFromClientData:(id)clientData;	// 0x34ec1899
+ (void)readBulletStylesFromDocumentList:(id)documentList state:(id)state;	// 0x34e70ae9
+ (void)readBulletStylesFromMainMaster:(id)mainMaster state:(id)state;	// 0x34e76f1d
+ (void)readClientData:(id)data state:(id)state;	// 0x34ec1845
+ (void)readDocumentList:(id)list state:(id)state;	// 0x34e70a85
+ (void)readHyperlinkScreenTipsFromDocumentList:(id)documentList state:(id)state;	// 0x34e70e8d
+ (id)readMacCharStyleFromClientData:(id)clientData;	// 0x34ec18dd
+ (void)readMacCharStylesFromDocumentList:(id)documentList state:(id)state;	// 0x34e70db5
+ (const PBTextFormatProgTagInfo *)textFormatInfoForProgTagName:(const unsigned short *)progTagName;	// 0x350d23e1
@end
