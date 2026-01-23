import pubchempy as pcp
import requests
import os

output_dir = "PubChem_3D_SDF"
os.makedirs(output_dir, exist_ok=True)

compound_list = [
    "Abacavir sulfate",
    "Abiraterone acetate",
    "Niraparib tosylate",
    "Acetazolamide",
    "Acetohydroxamic acid",
    "Acetylcysteine",
    "Isoproterenol hydrochloride",
    "Aclidinium bromide",
    "Formoterol fumarate",
    "Acrisorcin",
    "Alatrofloxacin mesylate",
    "Albendazole",
    "Alclometasone dipropionate",
    "Alectinib hydrochloride",
    "Alendronate sodium",
    "Alfuzosin hydrochloride",
    "Aliskiren hemifumarate",
    "Amlodipine besylate",
    "Hydrochlorothiazide",
    "Almotriptan malate",
    "Alosetron hydrochloride",
    "Alprazolam",
    "Amantadine hydrochloride",
    "Amcinonide"
]

def download_3d_sdf(name):
    compounds = pcp.get_compounds(name, "name")
    if not compounds:
        print(f"❌ Not found: {name}")
        return

    cid = compounds[0].cid
    url = f"https://pubchem.ncbi.nlm.nih.gov/rest/pug/compound/CID/{cid}/SDF?record_type=3d"
    r = requests.get(url)

    if r.status_code == 200:
        file_name = name.replace(" ", "_") + ".sdf"
        with open(os.path.join(output_dir, file_name), "wb") as f:
            f.write(r.content)
        print(f"✅ Downloaded: {name}")
    else:
        print(f"⚠️ 3D not available: {name}")

for compound in compound_list:
    download_3d_sdf(compound)

print("\n🎯 All downloads completed")
