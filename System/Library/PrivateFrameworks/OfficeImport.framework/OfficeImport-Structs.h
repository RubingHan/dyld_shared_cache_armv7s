/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDString, WDBorder, NSMutableArray, NSDate, WDShading, WDStyle, NSString, <TSUMultipleChoiceListChoiceProviding>, TSUColor;

typedef struct EFRefTok {
	int type;
	unsigned dataSize;
	unsigned char data[12];
} EFRefTok;

typedef struct CGColor* CGColorRef;

typedef struct ODIHRange {
	float mMid;
	float mLength;
} ODIHRange;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CFData* CFDataRef;

typedef struct CGDataConsumer* CGDataConsumerRef;

typedef struct CGContext* CGContextRef;

typedef struct CGImage* CGImageRef;

typedef struct CGPath* CGPathRef;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	bool primaryCategoryHasDates;
	bool secondaryCategoryHasDates;
	bool primaryAxisHasDates;
	bool secondaryAxisHasDates;
} SCD_Struct_EM12;

typedef struct __CFNumberFormatter* CFNumberFormatterRef;

typedef struct __CFDateFormatter* CFDateFormatterRef;

typedef struct {
	/*function pointer*/ void* field1;
	/*function pointer*/ void* field2;
	/*function pointer*/ void* field3;
	/*function pointer*/ void* field4;
	/*function pointer*/ void* field5;
} SCD_Struct_CM15;

typedef struct __CFArray* CFArrayRef;

typedef struct EDValue {
	int type;
	/*function pointer*/ void* ;
	bool boolean;
	double number;
	EDString* string;
	unsigned long long stringIndex;
	i) error;
} EDValue;

typedef struct CHDDataPoint {
	unsigned long long index;
	EDValue value;
	unsigned long long contentFormatId;
} CHDDataPoint;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _xmlTextReader* xmlTextReaderRef;

typedef struct OCCCryptoKey* OCCCryptoKeyRef;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<int, unsigned long, std::__1::less<int>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<int, unsigned long, std::__1::less<int>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<int, unsigned long>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<int, unsigned long>, void *> > >;

typedef struct _tree<std::__1::pair<int, unsigned long>, std::__1::__map_value_compare<int, unsigned long, std::__1::less<int>, true>, std::__1::allocator<std::__1::pair<int, unsigned long> > > {
	__tree_node<std::__1::pair<int, unsigned long>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<int, unsigned long>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<int, unsigned long, std::__1::less<int>, true> > __pair3_;
} tree<std::__1::pair<int, unsigned long>, std::__1::__map_value_compare<int, unsigned long, std::__1::less<int>, true>, std::__1::allocator<std::__1::pair<int, unsigned long> > >;

typedef struct map<int, unsigned long, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned long> > > {
	tree<std::__1::pair<int, unsigned long>, std::__1::__map_value_compare<int, unsigned long, std::__1::less<int>, true>, std::__1::allocator<std::__1::pair<int, unsigned long> > > __tree_;
} map<int, unsigned long, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned long> > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, unsigned long, std::__1::less<unsigned long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, unsigned long, std::__1::less<unsigned long>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned long, unsigned long>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned long, unsigned long>, void *> > >;

typedef struct _tree<std::__1::pair<unsigned long, unsigned long>, std::__1::__map_value_compare<unsigned long, unsigned long, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::pair<unsigned long, unsigned long> > > {
	__tree_node<std::__1::pair<unsigned long, unsigned long>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned long, unsigned long>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, unsigned long, std::__1::less<unsigned long>, true> > __pair3_;
} tree<std::__1::pair<unsigned long, unsigned long>, std::__1::__map_value_compare<unsigned long, unsigned long, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::pair<unsigned long, unsigned long> > >;

typedef struct map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > > {
	tree<std::__1::pair<unsigned long, unsigned long>, std::__1::__map_value_compare<unsigned long, unsigned long, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::pair<unsigned long, unsigned long> > > __tree_;
} map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >;

typedef struct EDCellAnchorMarker {
	int columnIndex;
	float columnAdjustment;
	int rowIndex;
	float rowAdjustment;
} EDCellAnchorMarker;

typedef struct EDAreaReference {
	int firstRow;
	int firstColumn;
	int lastRow;
	int lastColumn;
} EDAreaReference;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<long, unsigned long, std::__1::less<long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<long, unsigned long, std::__1::less<long>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<long, unsigned long>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<long, unsigned long>, void *> > >;

typedef struct _tree<std::__1::pair<long, unsigned long>, std::__1::__map_value_compare<long, unsigned long, std::__1::less<long>, true>, std::__1::allocator<std::__1::pair<long, unsigned long> > > {
	__tree_node<std::__1::pair<long, unsigned long>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<long, unsigned long>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<long, unsigned long, std::__1::less<long>, true> > __pair3_;
} tree<std::__1::pair<long, unsigned long>, std::__1::__map_value_compare<long, unsigned long, std::__1::less<long>, true>, std::__1::allocator<std::__1::pair<long, unsigned long> > >;

typedef struct map<long, unsigned long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, unsigned long> > > {
	tree<std::__1::pair<long, unsigned long>, std::__1::__map_value_compare<long, unsigned long, std::__1::less<long>, true>, std::__1::allocator<std::__1::pair<long, unsigned long> > > __tree_;
} map<long, unsigned long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, unsigned long> > >;

typedef const struct EshTablePropVal<int>* EshTablePropVal<int>Ref;

typedef const struct EshTablePropVal<EshGradientStop>* EshTablePropVal<EshGradientStop>Ref;

typedef struct EshShape* EshShapeRef;

typedef struct EshContent* EshContentRef;

typedef struct OADFormulaArg {
	int type;
	int value;
} OADFormulaArg;

typedef struct OADAdjustCoord {
	bool isFormulaResult;
	int value;
} OADAdjustCoord;

typedef struct OADAdjustPoint {
	OADAdjustCoord x;
	OADAdjustCoord y;
} OADAdjustPoint;

typedef struct OcReader* OcReaderRef;

typedef struct OcWriter* OcWriterRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct _SsrwPropertyStorage* SsrwPropertyStorageRef;

typedef struct SSRW_BLOB {
	unsigned cbSize;
	char* pData;
} SSRW_BLOB;

typedef struct SSRW_FILETIME {
	unsigned dwLowDateTime;
	unsigned dwHighDateTime;
} SSRW_FILETIME;

typedef struct SsrwPropVariant {
	unsigned short vt;
	/*function pointer*/ void* v;
	unsigned char cVal;
	short iVal;
	int lVal;
	double dblVal;
	unsigned short bstrVal;
	SSRW_BLOB blob;
	char* pszVal;
	SSRW_FILETIME filetime;
	_SSRW_CLIPDATA pclipdata;
	s) boolVal;
} SsrwPropVariant;

typedef struct _RootStorage* RootStorageRef;

typedef struct {
	unsigned m_data1;
	unsigned short m_data2;
	unsigned short m_data3;
	unsigned char m_data4[8];
} SCD_Struct_ST52;

typedef struct _Storage* StorageRef;

typedef struct _Stream* StreamRef;

typedef struct PptDocumentAtom* PptDocumentAtomRef;

typedef struct __CFAttributedString* CFAttributedStringRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef const struct WrdDateTime* WrdDateTimeRef;

typedef struct WrdObject* WrdObjectRef;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	id field6;
	id field7;
	int field8;
	int field9;
	int field10;
	id field11;
	id field12;
	id field13;
	id field14;
	int field15;
	int field16;
	int field17;
	short field18;
	short field19;
	id field20;
	id field21;
	float field22;
	unsigned short field23;
	unsigned short field24;
	unsigned short field25;
	unsigned short field26;
	unsigned short field27;
	unsigned short field28;
	unsigned short field29;
	unsigned char field30;
	unsigned char field31;
	unsigned char field32;
	unsigned char field33;
	unsigned char field34;
	unsigned char field35;
	unsigned char field36;
	unsigned char field37;
	int field38;
	unsigned char field39;
	unsigned char field40;
	bool field41;
	unsigned char field42;
	unsigned char field43;
	unsigned char field44;
	unsigned char field45;
	unsigned char field46;
	unsigned char field47;
	unsigned char field48;
	unsigned char field49;
	unsigned short field50;
	unsigned field51 : 1;
	unsigned field52 : 1;
	unsigned field53 : 1;
	unsigned field54 : 1;
	unsigned field55 : 1;
	unsigned field56 : 1;
	unsigned field57 : 1;
	unsigned field58 : 1;
	unsigned field59 : 1;
	unsigned field60 : 1;
	unsigned field61 : 1;
	unsigned field62 : 1;
	unsigned field63 : 1;
	unsigned field64 : 1;
	unsigned field65 : 1;
	unsigned field66 : 1;
	unsigned field67 : 1;
	unsigned field68 : 1;
	unsigned field69 : 1;
	unsigned field70 : 1;
	unsigned field71 : 1;
	unsigned field72 : 1;
	unsigned field73 : 1;
	unsigned field74 : 1;
	unsigned field75 : 1;
	unsigned field76 : 1;
	unsigned field77 : 1;
	unsigned field78 : 1;
	unsigned field79 : 1;
	unsigned field80 : 1;
	unsigned field81 : 1;
	unsigned field82 : 1;
	unsigned field83 : 1;
	unsigned field84 : 1;
	unsigned field85 : 1;
	unsigned field86 : 1;
	unsigned field87 : 1;
	unsigned field88 : 1;
	unsigned field89 : 1;
	unsigned field90 : 1;
	unsigned field91 : 1;
	unsigned field92 : 1;
	unsigned field93 : 1;
	unsigned field94 : 1;
	unsigned field95 : 1;
	unsigned field96 : 1;
	unsigned field97 : 1;
	unsigned field98 : 1;
	unsigned field99 : 1;
	unsigned field100 : 1;
	unsigned field101 : 1;
	unsigned field102 : 1;
	unsigned field103 : 1;
	unsigned field104 : 1;
	unsigned field105 : 1;
	unsigned field106 : 1;
	unsigned field107 : 1;
	unsigned field108 : 1;
	unsigned field109 : 1;
	unsigned field110 : 1;
	unsigned field111 : 1;
	unsigned field112 : 1;
	unsigned field113 : 1;
	unsigned field114 : 1;
	unsigned field115 : 1;
	unsigned field116 : 1;
	unsigned field117 : 1;
	unsigned field118 : 1;
	unsigned field119 : 1;
	unsigned field120 : 1;
	unsigned field121 : 1;
} SCD_Struct_WD60;

typedef struct {
	unsigned char field1;
	unsigned char field2;
} SCD_Struct_WD61;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	id field6;
	id field7;
	id field8;
	id field9;
	SCD_Struct_WD61 field10;
	id field11;
	id field12;
	long long field13;
	unsigned long long field14;
	unsigned long long field15;
	long long field16;
	long long field17;
	long long field18;
	long long field19;
	long long field20;
	short field21;
	short field22;
	short field23;
	short field24;
	unsigned short field25;
	unsigned short field26;
	unsigned short field27;
	unsigned short field28;
	unsigned short field29;
	unsigned short field30;
	BOOL field31;
	unsigned char field32;
	unsigned char field33;
	unsigned char field34;
	unsigned char field35;
	unsigned char field36;
	unsigned char field37;
	unsigned char field38;
	unsigned field39 : 1;
	unsigned field40 : 1;
	unsigned field41 : 1;
	unsigned field42 : 1;
	unsigned field43 : 1;
	unsigned field44 : 1;
	unsigned field45 : 1;
	unsigned field46 : 1;
	unsigned field47 : 1;
	unsigned field48 : 1;
	unsigned field49 : 1;
	unsigned field50 : 1;
	unsigned field51 : 1;
	unsigned field52 : 1;
	unsigned field53 : 1;
	unsigned field54 : 1;
	unsigned field55 : 1;
	unsigned field56 : 1;
	unsigned field57 : 1;
	unsigned field58 : 1;
	unsigned field59 : 1;
	unsigned field60 : 1;
	unsigned field61 : 1;
	unsigned field62 : 1;
	unsigned field63 : 1;
	unsigned field64 : 1;
	unsigned field65 : 1;
	unsigned field66 : 1;
	unsigned field67 : 1;
	unsigned field68 : 1;
	unsigned field69 : 1;
	unsigned field70 : 1;
	unsigned field71 : 1;
	unsigned field72 : 1;
	unsigned field73 : 1;
	unsigned field74 : 1;
	unsigned field75 : 1;
	unsigned field76 : 1;
	unsigned field77 : 1;
	unsigned field78 : 1;
	unsigned field79 : 1;
	unsigned field80 : 1;
	unsigned field81 : 1;
	unsigned field82 : 1;
	unsigned field83 : 1;
	unsigned field84 : 1;
	unsigned field85 : 1;
	unsigned field86 : 1;
	unsigned field87 : 1;
	unsigned field88 : 1;
	unsigned field89 : 1;
	unsigned field90 : 1;
	unsigned field91 : 1;
	unsigned field92 : 1;
	unsigned field93 : 1;
	unsigned field94 : 1;
	unsigned field95 : 1;
	unsigned field96 : 1;
} SCD_Struct_WD62;

typedef struct {
	short field1;
	unsigned char field2;
	unsigned char field3;
} SCD_Struct_WD63;

typedef struct {
	int field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	int field5;
	bool field6;
	bool field7;
	bool field8;
	bool field9;
	bool field10;
} SCD_Struct_WD64;

typedef struct {
	WDBorder* topBorder;
	WDBorder* leftBorder;
	WDBorder* bottomBorder;
	WDBorder* rightBorder;
	int breakType;
	long long pageWidth;
	long long pageHeight;
	unsigned pageScale;
	int pageOrientation;
	int textDirection;
	long long leftMargin;
	long long rightMargin;
	long long topMargin;
	long long bottomMargin;
	long long headerMargin;
	long long footerMargin;
	long long gutterMargin;
	int borderDepth;
	int borderDisplay;
	int borderOffset;
	short lineNumberStart;
	unsigned short lineNumberIncrement;
	short lineNumberDistance;
	int lineNumberRestart;
	int pageNumberFormat;
	unsigned short pageNumberStart;
	int chapterNumberSeparator;
	NSMutableArray* columnWidths;
	NSMutableArray* columnSpaces;
	unsigned short columnCount;
	long long columnSpace;
	int verticalJustification;
	unsigned short indexToAuthorIDOfFormattingChange;
	NSDate* formattingChangeDate;
	unsigned topBorderOverridden : 1;
	unsigned leftBorderOverridden : 1;
	unsigned bottomBorderOverridden : 1;
	unsigned rightBorderOverridden : 1;
	unsigned breakTypeOverridden : 1;
	unsigned pageWidthOverridden : 1;
	unsigned pageHeightOverridden : 1;
	unsigned pageScaleOverridden : 1;
	unsigned pageOrientationOverridden : 1;
	unsigned textDirectionOverridden : 1;
	unsigned leftMarginOverridden : 1;
	unsigned rightMarginOverridden : 1;
	unsigned topMarginOverridden : 1;
	unsigned bottomMarginOverridden : 1;
	unsigned headerMarginOverridden : 1;
	unsigned footerMarginOverridden : 1;
	unsigned gutterMarginOverridden : 1;
	unsigned borderDepthOverridden : 1;
	unsigned borderDisplayOverridden : 1;
	unsigned borderOffsetOverridden : 1;
	unsigned lineNumberStartOverridden : 1;
	unsigned lineNumberIncrementOverridden : 1;
	unsigned lineNumberDistanceOverridden : 1;
	unsigned lineNumberRestartOverridden : 1;
	unsigned pageNumberFormatOverridden : 1;
	unsigned pageNumberStartOverridden : 1;
	unsigned pageNumberRestart : 1;
	unsigned pageNumberRestartOverridden : 1;
	unsigned chapterNumberSeparatorOverridden : 1;
	unsigned columnCountOverridden : 1;
	unsigned columnsEqualWidth : 1;
	unsigned columnsEqualWidthOverridden : 1;
	unsigned columnSpaceOverridden : 1;
	unsigned verticalJustificationOverridden : 1;
	unsigned titlePage : 1;
	unsigned titlePageOverridden : 1;
	unsigned formattingChanged : 1;
	unsigned formattingChangedOverridden : 1;
	unsigned indexToAuthorIDOfFormattingChangeOverridden : 1;
	unsigned formattingChangeDateOverridden : 1;
} SCD_Struct_WD65;

typedef struct {
	WDShading* shading;
	WDBorder* topBorder;
	WDBorder* leftBorder;
	WDBorder* bottomBorder;
	WDBorder* rightBorder;
	WDBorder* diagonalUpBorder;
	WDBorder* diagonalDownBorder;
	WDBorder* insideHorizontalBorder;
	WDBorder* insideVerticalBorder;
	int widthType;
	short topMargin;
	int topMarginType;
	short bottomMargin;
	int bottomMarginType;
	short leftMargin;
	int leftMarginType;
	short rightMargin;
	int rightMarginType;
	int verticalAlignment;
	BOOL textDirection;
	int deleted;
	int edited;
	int formattingChanged;
	unsigned short indexToAuthorIDOfDeletion;
	unsigned short indexToAuthorIDOfEdit;
	unsigned short indexToAuthorIDOfFormattingChange;
	NSDate* deletionDate;
	NSDate* editDate;
	NSDate* formattingChangeDate;
	unsigned shadingOverridden : 1;
	unsigned topBorderOverridden : 1;
	unsigned leftBorderOverridden : 1;
	unsigned bottomBorderOverridden : 1;
	unsigned rightBorderOverridden : 1;
	unsigned diagonalUpBorderOverridden : 1;
	unsigned diagonalDownBorderOverridden : 1;
	unsigned insideHorizontalBorderOverridden : 1;
	unsigned insideVerticalBorderOverridden : 1;
	unsigned widthTypeOverridden : 1;
	unsigned topMarginOverridden : 1;
	unsigned topMarginTypeOverridden : 1;
	unsigned bottomMarginOverridden : 1;
	unsigned bottomMarginTypeOverridden : 1;
	unsigned leftMarginOverridden : 1;
	unsigned leftMarginTypeOverridden : 1;
	unsigned rightMarginOverridden : 1;
	unsigned rightMarginTypeOverridden : 1;
	unsigned verticalAlignmentOverridden : 1;
	unsigned textDirectionOverridden : 1;
	unsigned verticallyMergedCell : 1;
	unsigned verticallyMergedCellOverridden : 1;
	unsigned firstInSetOfVerticallyMergedCells : 1;
	unsigned firstInSetOfVerticallyMergedCellsOverridden : 1;
	unsigned noWrap : 1;
	unsigned noWrapOverridden : 1;
	unsigned deletedOverridden : 1;
	unsigned editedOverridden : 1;
	unsigned formattingChangedOverridden : 1;
	unsigned indexToAuthorIDOfDeletionOverridden : 1;
	unsigned indexToAuthorIDOfEditOverridden : 1;
	unsigned indexToAuthorIDOfFormattingChangeOverridden : 1;
	unsigned deletionDateOverridden : 1;
	unsigned editDateOverridden : 1;
	unsigned formattingChangeDateOverridden : 1;
} SCD_Struct_WD66;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	id field5;
	id field6;
	id field7;
	id field8;
	id field9;
	int field10;
	short field11;
	int field12;
	short field13;
	int field14;
	short field15;
	int field16;
	short field17;
	int field18;
	int field19;
	BOOL field20;
	int field21;
	int field22;
	int field23;
	unsigned short field24;
	unsigned short field25;
	unsigned short field26;
	id field27;
	id field28;
	id field29;
	unsigned field30 : 1;
	unsigned field31 : 1;
	unsigned field32 : 1;
	unsigned field33 : 1;
	unsigned field34 : 1;
	unsigned field35 : 1;
	unsigned field36 : 1;
	unsigned field37 : 1;
	unsigned field38 : 1;
	unsigned field39 : 1;
	unsigned field40 : 1;
	unsigned field41 : 1;
	unsigned field42 : 1;
	unsigned field43 : 1;
	unsigned field44 : 1;
	unsigned field45 : 1;
	unsigned field46 : 1;
	unsigned field47 : 1;
	unsigned field48 : 1;
	unsigned field49 : 1;
	unsigned field50 : 1;
	unsigned field51 : 1;
	unsigned field52 : 1;
	unsigned field53 : 1;
	unsigned field54 : 1;
	unsigned field55 : 1;
	unsigned field56 : 1;
	unsigned field57 : 1;
	unsigned field58 : 1;
	unsigned field59 : 1;
	unsigned field60 : 1;
	unsigned field61 : 1;
	unsigned field62 : 1;
	unsigned field63 : 1;
	unsigned field64 : 1;
} SCD_Struct_WD67;

typedef struct {
	WDStyle* baseStyle;
	WDShading* shading;
	WDBorder* topBorder;
	WDBorder* leftBorder;
	WDBorder* bottomBorder;
	WDBorder* rightBorder;
	WDBorder* insideHorizontalBorder;
	WDBorder* insideVerticalBorder;
	int justification;
	int alignment;
	long long width;
	int widthType;
	short indent;
	int indentType;
	short cellSpacing;
	int cellSpacingType;
	int verticalAnchor;
	int horizontalAnchor;
	long long verticalPosition;
	long long horizontalPosition;
	long long leftDistanceFromText;
	long long topDistanceFromText;
	long long rightDistanceFromText;
	long long bottomDistanceFromText;
	int deleted;
	int edited;
	int formattingChanged;
	unsigned short indexToAuthorIDOfDeletion;
	unsigned short indexToAuthorIDOfEdit;
	unsigned short indexToAuthorIDOfFormattingChange;
	NSDate* deletionDate;
	NSDate* editDate;
	NSDate* formattingChangeDate;
	unsigned baseStyleOverridden : 1;
	unsigned shadingOverridden : 1;
	unsigned topBorderOverridden : 1;
	unsigned leftBorderOverridden : 1;
	unsigned bottomBorderOverridden : 1;
	unsigned rightBorderOverridden : 1;
	unsigned insideHorizontalBorderOverridden : 1;
	unsigned insideVerticalBorderOverridden : 1;
	unsigned justificationOverridden : 1;
	unsigned alignmentOverridden : 1;
	unsigned widthOverridden : 1;
	unsigned widthTypeOverridden : 1;
	unsigned indentOverridden : 1;
	unsigned indentTypeOverridden : 1;
	unsigned cellSpacingOverridden : 1;
	unsigned cellSpacingTypeOverridden : 1;
	unsigned verticalAnchorOverridden : 1;
	unsigned horizontalAnchorOverridden : 1;
	unsigned verticalPositionOverridden : 1;
	unsigned horizontalPositionOverridden : 1;
	unsigned leftDistanceFromTextOverridden : 1;
	unsigned topDistanceFromTextOverridden : 1;
	unsigned rightDistanceFromTextOverridden : 1;
	unsigned bottomDistanceFromTextOverridden : 1;
	unsigned deletedOverridden : 1;
	unsigned editedOverridden : 1;
	unsigned formattingChangedOverridden : 1;
	unsigned indexToAuthorIDOfDeletionOverridden : 1;
	unsigned indexToAuthorIDOfEditOverridden : 1;
	unsigned indexToAuthorIDOfFormattingChangeOverridden : 1;
	unsigned deletionDateOverridden : 1;
	unsigned editDateOverridden : 1;
	unsigned formattingChangeDateOverridden : 1;
} SCD_Struct_WD68;

typedef struct {
	short widthBefore;
	int widthBeforeType;
	short widthAfter;
	int widthAfterType;
	long long height;
	int heightType;
	unsigned widthBeforeOverridden : 1;
	unsigned widthBeforeTypeOverridden : 1;
	unsigned widthAfterOverridden : 1;
	unsigned widthAfterTypeOverridden : 1;
	unsigned heightOverridden : 1;
	unsigned heightTypeOverridden : 1;
	unsigned header : 1;
	unsigned headerOverridden : 1;
} SCD_Struct_WD69;

typedef struct ChVector<long>* ChVector<long>Ref;

typedef struct _CCCryptor* CCCryptorRef;

typedef struct CGDataProvider* CGDataProviderRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/ void* zalloc;
	/*function pointer*/ void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
} SCD_Struct_TS74;

typedef struct __CFLocale* CFLocaleRef;

typedef struct __CFDate* CFDateRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	NSString* mCurrencyCode;
	unsigned mDecimalPlaces : 8;
	unsigned mNegativeStyle : 3;
	unsigned mShowThousandsSeparator : 1;
	unsigned mUseAccountingStyle : 1;
} SCD_Struct_TS78;

typedef struct {
	unsigned mFractionAccuracy : 8;
} SCD_Struct_TS79;

typedef struct {
	unsigned mBase : 8;
	unsigned mBasePlaces : 8;
	unsigned mBaseUseMinusSign : 1;
} SCD_Struct_TS80;

typedef struct {
	unsigned mSuppressDateFormat : 1;
	unsigned mSuppressTimeFormat : 1;
	NSString* mDateTimeFormat;
} SCD_Struct_TS81;

typedef struct {
	unsigned mUseAutomaticUnits : 1;
	int mDurationUnitSmallest;
	int mDurationUnitLargest;
	int mDurationStyle;
} SCD_Struct_TS82;

typedef struct {
	double mMinimum;
	double mMaximum;
	double mIncrement;
	int mDisplayFormatType;
	unsigned mOrientation : 2;
	unsigned mPosition : 2;
} SCD_Struct_TS83;

typedef struct {
	int mInitialValue;
	unsigned mMultipleChoiceListFormatID;
	<TSUMultipleChoiceListChoiceProviding>* mData;
} SCD_Struct_TS84;

typedef struct {
	unsigned mCustomFormatID;
	/*function pointer*/ void* mData;
} SCD_Struct_TS85;

typedef struct {
	int mFormatType;
	/*function pointer*/ void* ;
	SCD_Struct_TS78 mNumberFormatStruct;
	SCD_Struct_TS79 mFractionFormatStruct;
	SCD_Struct_TS80 mBaseFormatStruct;
	SCD_Struct_TS81 mDateFormatStruct;
	SCD_Struct_TS82 mDurationFormatStruct;
	SCD_Struct_TS85 mCustomFormatStruct;
	SCD_Struct_TS83 mControlFormatStruct;
	SCD_Struct_TS84) mMultipleChoiceListFormatStruct;
} SCD_Struct_TS86;

typedef struct {
	id field1;
	unsigned field2 : 8;
	unsigned field3 : 3;
	unsigned field4 : 1;
	unsigned field5 : 1;
} SCD_Struct_TS87;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	id field3;
} SCD_Struct_TS88;

typedef struct {
	int field1;
	unsigned field2;
	id field3;
} SCD_Struct_TS89;

typedef struct {
	int( field1;
	/*function pointer*/ void* field2;
	= field3;
	SCD_Struct_TS79 field4;
	SCD_Struct_TS80 field5;
	SCD_Struct_TS82 field6;
	SCD_Struct_TS83 field7;
	SCD_Struct_TS85 field8;
	SCD_Struct_TS87 field9;
	SCD_Struct_TS88 field10;
	SCD_Struct_TS89) field11;
} SCD_Struct_TS90;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_TS92;

typedef struct __CTFont* CTFontRef;

typedef struct CGShading* CGShadingRef;

typedef struct CGFunction* CGFunctionRef;

typedef struct {
	TSUColor* mLow;
	TSUColor* mHigh;
} SCD_Struct_MF96;

typedef struct OADCachedTextStyleData {
	unsigned verticalAlign : 3;
	short lineSpacing;
	short beforeSpacing;
	short afterSpacing;
	short leftMargin;
	short rightMargin;
	short indent;
	short defaultTab;
	unsigned horizontalAlign : 4;
	unsigned short fontFaceIndex;
	short fontSize;
	unsigned short fontColorIndex;
	unsigned bold : 1;
	unsigned italic : 1;
	unsigned underline : 5;
	unsigned format : 2;
	unsigned kerning : 2;
	unsigned strikethrough : 2;
	unsigned caps : 2;
} OADCachedTextStyleData;
