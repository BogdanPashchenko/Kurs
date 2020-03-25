/*******************************************************************************
* Filename      : i2s2extfieldvalues.hpp
*
* Details       : Enumerations related with I2S2ext peripheral. This header file
*                 is auto-generated for STM32F303 device.
*
*
*******************************************************************************/

#if !defined(I2S2EXTENUMS_HPP)
#define I2S2EXTENUMS_HPP

#include "fieldvalue.hpp"     //for FieldValues 

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_BIDIMODE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_BIDIMODE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_BIDIMODE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_BIDIOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_BIDIOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_BIDIOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_CRCEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_CRCEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_CRCEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_CRCNEXT_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_CRCNEXT_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_CRCNEXT_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_CRCL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_CRCL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_CRCL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_RXONLY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_RXONLY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_RXONLY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_SSM_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_SSM_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_SSM_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_SSI_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_SSI_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_SSI_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_LSBFIRST_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_LSBFIRST_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_LSBFIRST_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_SPE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_SPE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_SPE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_BR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_BR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_BR_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2S2ext_CR1_BR_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2S2ext_CR1_BR_Values, BaseType, 3U> ;
  using Value4 = FieldValue<I2S2ext_CR1_BR_Values, BaseType, 4U> ;
  using Value5 = FieldValue<I2S2ext_CR1_BR_Values, BaseType, 5U> ;
  using Value6 = FieldValue<I2S2ext_CR1_BR_Values, BaseType, 6U> ;
  using Value7 = FieldValue<I2S2ext_CR1_BR_Values, BaseType, 7U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_MSTR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_MSTR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_MSTR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_CPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_CPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_CPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR1_CPHA_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR1_CPHA_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR1_CPHA_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR2_RXDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR2_RXDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR2_RXDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR2_TXDMAEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR2_TXDMAEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR2_TXDMAEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR2_SSOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR2_SSOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR2_SSOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR2_NSSP_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR2_NSSP_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR2_NSSP_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR2_FRF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR2_FRF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR2_FRF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR2_ERRIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR2_ERRIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR2_ERRIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR2_RXNEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR2_RXNEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR2_RXNEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR2_TXEIE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR2_TXEIE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR2_TXEIE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR2_DS_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 3U> ;
  using Value4 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 4U> ;
  using Value5 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 5U> ;
  using Value6 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 6U> ;
  using Value7 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 7U> ;
  using Value8 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 8U> ;
  using Value9 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 9U> ;
  using Value10 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 10U> ;
  using Value11 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 11U> ;
  using Value12 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 12U> ;
  using Value13 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 13U> ;
  using Value14 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 14U> ;
  using Value15 = FieldValue<I2S2ext_CR2_DS_Values, BaseType, 15U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR2_FRXTH_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR2_FRXTH_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR2_FRXTH_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR2_LDMA_RX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR2_LDMA_RX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR2_LDMA_RX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CR2_LDMA_TX_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_CR2_LDMA_TX_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_CR2_LDMA_TX_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_SR_RXNE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_SR_RXNE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_SR_RXNE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_SR_TXE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_SR_TXE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_SR_TXE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_SR_CHSIDE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_SR_CHSIDE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_SR_CHSIDE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_SR_UDR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_SR_UDR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_SR_UDR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_SR_CRCERR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_SR_CRCERR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_SR_CRCERR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_SR_MODF_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_SR_MODF_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_SR_MODF_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_SR_OVR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_SR_OVR_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_SR_OVR_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_SR_BSY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_SR_BSY_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_SR_BSY_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_SR_TIFRFE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_SR_TIFRFE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_SR_TIFRFE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_SR_FRLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_SR_FRLVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_SR_FRLVL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2S2ext_SR_FRLVL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2S2ext_SR_FRLVL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_SR_FTLVL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_SR_FTLVL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_SR_FTLVL_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2S2ext_SR_FTLVL_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2S2ext_SR_FTLVL_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_DR_DR_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_CRCPR_CRCPOLY_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_RXCRCR_RxCRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_TXCRCR_TxCRC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_I2SCFGR_I2SMOD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_I2SCFGR_I2SMOD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_I2SCFGR_I2SMOD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_I2SCFGR_I2SE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_I2SCFGR_I2SE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_I2SCFGR_I2SE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_I2SCFGR_I2SCFG_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_I2SCFGR_I2SCFG_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_I2SCFGR_I2SCFG_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2S2ext_I2SCFGR_I2SCFG_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2S2ext_I2SCFGR_I2SCFG_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_I2SCFGR_PCMSYNC_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_I2SCFGR_PCMSYNC_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_I2SCFGR_PCMSYNC_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_I2SCFGR_I2SSTD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_I2SCFGR_I2SSTD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_I2SCFGR_I2SSTD_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2S2ext_I2SCFGR_I2SSTD_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2S2ext_I2SCFGR_I2SSTD_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_I2SCFGR_CKPOL_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_I2SCFGR_CKPOL_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_I2SCFGR_CKPOL_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_I2SCFGR_DATLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_I2SCFGR_DATLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_I2SCFGR_DATLEN_Values, BaseType, 1U> ;
  using Value2 = FieldValue<I2S2ext_I2SCFGR_DATLEN_Values, BaseType, 2U> ;
  using Value3 = FieldValue<I2S2ext_I2SCFGR_DATLEN_Values, BaseType, 3U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_I2SCFGR_CHLEN_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_I2SCFGR_CHLEN_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_I2SCFGR_CHLEN_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_I2SPR_MCKOE_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_I2SPR_MCKOE_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_I2SPR_MCKOE_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_I2SPR_ODD_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
  using Value0 = FieldValue<I2S2ext_I2SPR_ODD_Values, BaseType, 0U> ;
  using Value1 = FieldValue<I2S2ext_I2SPR_ODD_Values, BaseType, 1U> ;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType> 
struct I2S2ext_I2SPR_I2SDIV_Values: public RegisterField<Reg, offset, size, AccessMode> 
{
} ;

#endif //#if !defined(I2S2EXTENUMS_HPP)
