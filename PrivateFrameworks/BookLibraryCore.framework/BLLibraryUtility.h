
@interface BLLibraryUtility : NSObject

+ (id)_dcIdentifierFromOpfPath:(id)arg1 isEPUB:(bool)arg2;
+ (id)_iTunesMetadataPathForEpubPath:(id)arg1;
+ (bool)_isMultiUser;
+ (id)_storeIdFromiTunesMetadataPath:(id)arg1 error:(id*)arg2;
+ (id)dcIdentifierFromBookPath:(id)arg1;
+ (id)generateFileUniqueIdFromPath:(id)arg1;
+ (id)identifierFromBookContainer:(id)arg1 allowHash:(bool)arg2 allowStoreID:(bool)arg3 error:(id*)arg4;
+ (id)identifierFromBookPath:(id)arg1 allowHash:(bool)arg2 allowStoreID:(bool)arg3 error:(id*)arg4;
+ (id)identifierFromBookPath:(id)arg1 error:(id*)arg2;
+ (id)identifierFromBookZipArchive:(id)arg1 allowHash:(bool)arg2 allowStoreID:(bool)arg3 error:(id*)arg4;
+ (id)md5FromPath:(id)arg1;
+ (id)opfPathFromEpubPath:(id)arg1;
+ (id)opfPathFromFullOpfContainerPath:(id)arg1;
+ (id)p_opfPathFromContainerXmlDoc:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg1 epubPath:(id)arg2;
+ (id)p_opfPathFromContainerXmlPath:(id)arg1 epubPath:(id)arg2;
+ (id)uniqueIdFromEpubPath:(id)arg1;
+ (id)uniqueIdFromPdfPath:(id)arg1;
+ (bool)writeBinaryPropertyList:(id)arg1 toPath:(id)arg2 error:(id*)arg3;

@end