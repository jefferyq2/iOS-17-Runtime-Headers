
@interface CPMLSchema : NSObject {
    NSMutableArray * _categoricalDataList;
    NSMutableArray * _indexColumnList;
    NSMutableArray * _matchReplaceValue;
    NSMutableArray * _replaceMissingValue;
    NSMutableArray * attribute;
    NSMutableArray * availableOptions;
    NSMutableArray * nsRemapTable;
    NSMutableArray * schema;
    NSMutableArray * schemaHDef;
    NSMutableString * schemaHeader;
    NSMutableString * schemaHeaderWithType;
    int  yColumnPosition;
}

@property (nonatomic, readonly) NSMutableArray *attribute;
@property (nonatomic, readonly) NSMutableArray *availableOptions;
@property (nonatomic, readonly) NSMutableArray *indexColumnList;
@property (nonatomic, readonly) NSMutableArray *nsRemapTable;
@property (nonatomic, readonly) NSMutableString *schemaHeader;
@property (nonatomic, readonly) NSMutableString *schemaHeaderWithType;

- (void).cxx_destruct;
- (id)attribute;
- (id)availableOptions;
- (id)getColumnName:(unsigned long long)arg1;
- (int)getColumnPosition:(id)arg1;
- (int)getSchemaType:(unsigned long long)arg1;
- (id)getSubstituteValue:(unsigned long long)arg1;
- (unsigned long long)getTotalAttributes;
- (id)getUserDefinedCategoricalData:(unsigned long long)arg1;
- (unsigned long long)getUserDefinedCategoricalDataCount:(unsigned long long)arg1;
- (int)getVectorContent:(unsigned long long)arg1;
- (int)getYColumnPosition;
- (bool)hasOptions:(unsigned long long)arg1;
- (id)indexColumnList;
- (id)init:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (bool)isColumnContinous:(unsigned int)arg1;
- (bool)isIntType:(unsigned long long)arg1;
- (bool)isNumType:(unsigned long long)arg1;
- (bool)isRealType:(unsigned long long)arg1;
- (bool)isStringType:(unsigned long long)arg1;
- (bool)isVectorType:(unsigned long long)arg1;
- (bool)matchSubstituteValue:(unsigned long long)arg1 theValue:(id)arg2;
- (id)nsRemapTable;
- (id)schemaHeader;
- (id)schemaHeaderWithType;

@end